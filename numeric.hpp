
// algocpp/exception/numeric.hpp
//
// this file is part of algocpp and is copyrighted by algocpp.
// if used, it must comply with the mit license.

#ifndef ALGOCPP_EXCEPTION_NUMERIC
#define ALGOCPP_EXCEPTION_NUMERIC

#include <stdexcept>

namespace algocpp
{
	namespace exception
	{
		class numeric_error : public std::runtime_error
		{
		public:
			numeric_error(const char *_Message)
				: runtime_error(_Message) {}

		private:
			// None
		};
	}
}

#endif // ALGOCPP_EXCEPTION_NUMERIC