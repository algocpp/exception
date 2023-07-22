
// algocpp/exception/invaid_str.hpp
//
// this file is part of algocpp and is copyrighted by algocpp.
// if used, it must comply with the mit license.

#ifndef ALGOCPP_EXCEPTION_INVAIDSTR
#define ALGOCPP_EXCEPTION_INVAIDSTR

#include <stdexcept>

namespace algocpp
{
	namespace exception
	{
		class invaid_string : public std::runtime_error
		{
		public:
			invaid_string(const char *_Message)
				: runtime_error(_Message) {}

		private:
			// None
		};
	}
}

#endif // ALGOCPP_EXCEPTION_INVAIDSTR
