#include <pybind11/pybind11.h>

#include <fredbuf.h>

namespace py = pybind11;

PYBIND11_MODULE(fredbuf, m) {
    py::class_<PieceTree::LineRange>(m, "LineRange")
        .def_property_readonly("first", [](
            PieceTree::LineRange &self
        ){
            size_t result = (size_t)self.first;
            return result;
        })
        .def_property_readonly("last", [](
            PieceTree::LineRange &self
        ){
            size_t result = (size_t)self.last;
            return result;
        })
    ;
    py::class_<PieceTree::Tree>(m, "Tree")
        .def(py::init<>())
        .def("insert", [](
            PieceTree::Tree &self,
            size_t offset,
            std::string_view txt,
            bool suppress_history=false
        ){
            self.insert(PieceTree::CharOffset{offset}, txt, suppress_history ? PieceTree::SuppressHistory::Yes : PieceTree::SuppressHistory::No);
        })
        .def("remove", [](
            PieceTree::Tree &self,
            size_t offset,
            size_t length,
            bool suppress_history=false
        ){
            self.remove(PieceTree::CharOffset{offset}, PieceTree::Length{length}, suppress_history ? PieceTree::SuppressHistory::Yes : PieceTree::SuppressHistory::No);
        })
        /*
        //UndoRedoResult try_undo(CharOffset op_offset);
        //UndoRedoResult try_redo(CharOffset op_offset);

        // Direct history manipulation.
        // This will commit the current node to the history.  The offset provided will be the undo point later.
        //void commit_head(CharOffset offset);
        RedBlackTree head() const;
        // Snaps the tree back to the specified root.  This needs to be called with a root that is derived from
        // the set of buffers based on its creation.
        void snap_to(const RedBlackTree& new_root);
        */
        // Queries.
        .def("get_line_content", [](
            PieceTree::Tree &self,
            size_t line
        ){
            std::string result;
            self.get_line_content(&result, PieceTree::Line{line});
            return result;
        })
        .def("get_line_content_crlf", [](
            PieceTree::Tree &self,
            size_t line
        ){
            std::string result;
            PieceTree::IncompleteCRLF incomplete = self.get_line_content_crlf(&result, PieceTree::Line{line});
            return result;
        })
        .def("at", [](
            PieceTree::Tree &self,
            size_t offset
        ){
            char result = self.at(PieceTree::CharOffset{offset});
            return result;
        })
        .def("line_at", [](
            PieceTree::Tree &self,
            size_t offset
        ){
            size_t result = (size_t)self.line_at(PieceTree::CharOffset{offset});
            return result;
        })
        .def("get_line_range", [](
            PieceTree::Tree &self,
            size_t offset
        ){
            auto result = self.get_line_range(PieceTree::Line{offset});
            return result;
        })
        .def("get_line_range_crlf", [](
            PieceTree::Tree &self,
            size_t offset
        ){
            auto result = self.get_line_range_crlf(PieceTree::Line{offset});
            return result;
        })
        .def("get_line_range_with_newline", [](
            PieceTree::Tree &self,
            size_t offset
        ){
            auto result = self.get_line_range_with_newline(PieceTree::Line{offset});
            return result;
        })
        /*
        OwningSnapshot owning_snap() const;
        ReferenceSnapshot ref_snap() const;
        */
        .def("length", [](
            PieceTree::Tree &self
        ){
            size_t result = (size_t)self.length();
            return result;
        })
        .def("is_empty", &PieceTree::Tree::is_empty)
        .def("line_feed_count", [](
            PieceTree::Tree &self
        ){
            size_t result = (size_t)self.line_feed_count();
            return result;
        })
        .def("line_count", [](
            PieceTree::Tree &self
        ){
            size_t result = (size_t)self.line_count();
            return result;
        })
    ;
    py::class_<PieceTree::TreeBuilder>(m, "TreeBuilder")
        .def(py::init<>())
        .def("accept", &PieceTree::TreeBuilder::accept)
        .def("create", &PieceTree::TreeBuilder::create)
    ;
}
