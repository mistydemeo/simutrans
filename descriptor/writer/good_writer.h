#ifndef GOOD_WRITER_H
#define GOOD_WRITER_H

#include <string>
#include "obj_writer.h"
#include "../objversion.h"


class goods_writer_t : public obj_writer_t {
	private:
		static goods_writer_t the_instance;

		goods_writer_t() { register_writer(true); }

	protected:
		virtual std::string get_node_name(FILE* fp) const { return name_from_next_node(fp); }

	public:
		/**
		 * Writes goods node data to file
		 * @author Hj. Malthaner
		 */
		virtual void write_obj(FILE* fp, obj_node_t& parent, tabfileobj_t& obj);

		virtual obj_type get_type() const { return obj_good; }
		virtual const char* get_type_name() const { return "good"; }
};

#endif
