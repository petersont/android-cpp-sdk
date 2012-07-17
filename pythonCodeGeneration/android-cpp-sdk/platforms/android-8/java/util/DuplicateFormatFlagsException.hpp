/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.DuplicateFormatFlagsException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class IllegalArgumentException; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace util { class IllegalFormatException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/IllegalFormatException.hpp>


namespace j2cpp {

namespace java { namespace util {

	class DuplicateFormatFlagsException;
	class DuplicateFormatFlagsException
		: public object<DuplicateFormatFlagsException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit DuplicateFormatFlagsException(jobject jobj)
		: object<DuplicateFormatFlagsException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::IllegalArgumentException>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::util::IllegalFormatException>() const;
		operator local_ref<java::io::Serializable>() const;


		DuplicateFormatFlagsException(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getFlags();
		local_ref< java::lang::String > getMessage();
	}; //class DuplicateFormatFlagsException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::DuplicateFormatFlagsException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::util::DuplicateFormatFlagsException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::DuplicateFormatFlagsException::operator local_ref<java::lang::IllegalArgumentException>() const
{
	return local_ref<java::lang::IllegalArgumentException>(get_jobject());
}

java::util::DuplicateFormatFlagsException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::util::DuplicateFormatFlagsException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::util::DuplicateFormatFlagsException::operator local_ref<java::util::IllegalFormatException>() const
{
	return local_ref<java::util::IllegalFormatException>(get_jobject());
}

java::util::DuplicateFormatFlagsException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::DuplicateFormatFlagsException::DuplicateFormatFlagsException(local_ref< java::lang::String > const &a0)
: object<java::util::DuplicateFormatFlagsException>(
	call_new_object<
		java::util::DuplicateFormatFlagsException::J2CPP_CLASS_NAME,
		java::util::DuplicateFormatFlagsException::J2CPP_METHOD_NAME(0),
		java::util::DuplicateFormatFlagsException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::lang::String > java::util::DuplicateFormatFlagsException::getFlags()
{
	return call_method<
		java::util::DuplicateFormatFlagsException::J2CPP_CLASS_NAME,
		java::util::DuplicateFormatFlagsException::J2CPP_METHOD_NAME(1),
		java::util::DuplicateFormatFlagsException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::DuplicateFormatFlagsException::getMessage()
{
	return call_method<
		java::util::DuplicateFormatFlagsException::J2CPP_CLASS_NAME,
		java::util::DuplicateFormatFlagsException::J2CPP_METHOD_NAME(2),
		java::util::DuplicateFormatFlagsException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::DuplicateFormatFlagsException,"java/util/DuplicateFormatFlagsException")
J2CPP_DEFINE_METHOD(java::util::DuplicateFormatFlagsException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::DuplicateFormatFlagsException,1,"getFlags","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::DuplicateFormatFlagsException,2,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_DUPLICATEFORMATFLAGSEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
