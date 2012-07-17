/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.ExceptionInInitializerError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_EXCEPTIONININITIALIZERERROR_HPP_DECL
#define J2CPP_JAVA_LANG_EXCEPTIONININITIALIZERERROR_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class LinkageError; } } }
namespace j2cpp { namespace java { namespace lang { class Error; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Error.hpp>
#include <java/lang/LinkageError.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ExceptionInInitializerError;
	class ExceptionInInitializerError
		: public object<ExceptionInInitializerError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ExceptionInInitializerError(jobject jobj)
		: object<ExceptionInInitializerError>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::LinkageError>() const;
		operator local_ref<java::lang::Error>() const;
		operator local_ref<java::lang::Throwable>() const;


		ExceptionInInitializerError();
		ExceptionInInitializerError(local_ref< java::lang::String > const&);
		ExceptionInInitializerError(local_ref< java::lang::Throwable > const&);
		local_ref< java::lang::Throwable > getException();
		local_ref< java::lang::Throwable > getCause();
	}; //class ExceptionInInitializerError

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_EXCEPTIONININITIALIZERERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_EXCEPTIONININITIALIZERERROR_HPP_IMPL
#define J2CPP_JAVA_LANG_EXCEPTIONININITIALIZERERROR_HPP_IMPL

namespace j2cpp {



java::lang::ExceptionInInitializerError::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::ExceptionInInitializerError::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::ExceptionInInitializerError::operator local_ref<java::lang::LinkageError>() const
{
	return local_ref<java::lang::LinkageError>(get_jobject());
}

java::lang::ExceptionInInitializerError::operator local_ref<java::lang::Error>() const
{
	return local_ref<java::lang::Error>(get_jobject());
}

java::lang::ExceptionInInitializerError::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}


java::lang::ExceptionInInitializerError::ExceptionInInitializerError()
: object<java::lang::ExceptionInInitializerError>(
	call_new_object<
		java::lang::ExceptionInInitializerError::J2CPP_CLASS_NAME,
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_NAME(0),
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::ExceptionInInitializerError::ExceptionInInitializerError(local_ref< java::lang::String > const &a0)
: object<java::lang::ExceptionInInitializerError>(
	call_new_object<
		java::lang::ExceptionInInitializerError::J2CPP_CLASS_NAME,
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_NAME(1),
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::lang::ExceptionInInitializerError::ExceptionInInitializerError(local_ref< java::lang::Throwable > const &a0)
: object<java::lang::ExceptionInInitializerError>(
	call_new_object<
		java::lang::ExceptionInInitializerError::J2CPP_CLASS_NAME,
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_NAME(2),
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


local_ref< java::lang::Throwable > java::lang::ExceptionInInitializerError::getException()
{
	return call_method<
		java::lang::ExceptionInInitializerError::J2CPP_CLASS_NAME,
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_NAME(3),
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Throwable >
	>(get_jobject());
}

local_ref< java::lang::Throwable > java::lang::ExceptionInInitializerError::getCause()
{
	return call_method<
		java::lang::ExceptionInInitializerError::J2CPP_CLASS_NAME,
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_NAME(4),
		java::lang::ExceptionInInitializerError::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Throwable >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::ExceptionInInitializerError,"java/lang/ExceptionInInitializerError")
J2CPP_DEFINE_METHOD(java::lang::ExceptionInInitializerError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::ExceptionInInitializerError,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::ExceptionInInitializerError,2,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::ExceptionInInitializerError,3,"getException","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(java::lang::ExceptionInInitializerError,4,"getCause","()Ljava/lang/Throwable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_EXCEPTIONININITIALIZERERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
