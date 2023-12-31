
// algocpp/exception/blank.hpp
//
// this file is part of algocpp and is copyrighted by algocpp.
// if used, it must comply with the mit license.

#ifndef ALGOCPP_EXCEPTION_BLANK
#define ALGOCPP_EXCEPTION_BLANK

#include <stdexcept>

namespace algocpp
{
	namespace exception
	{
		class blank_argument : public std::runtime_error
		{
		public:
			blank_argument(const char *_Message)
				: runtime_error(_Message) {}

		private:
			// None
		};
	}
}

#endif // ALGOCPP_EXCEPTION_BLANK