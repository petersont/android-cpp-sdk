/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.StaleDataException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_STALEDATAEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_DATABASE_STALEDATAEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace database {

	class StaleDataException;
	class StaleDataException
		: public object<StaleDataException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit StaleDataException(jobject jobj)
		: object<StaleDataException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		StaleDataException();
		StaleDataException(local_ref< java::lang::String > const&);
	}; //class StaleDataException

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_STALEDATAEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_STALEDATAEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_STALEDATAEXCEPTION_HPP_IMPL

namespace j2cpp {



android::database::StaleDataException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::database::StaleDataException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::database::StaleDataException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

android::database::StaleDataException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::database::StaleDataException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


android::database::StaleDataException::StaleDataException()
: object<android::database::StaleDataException>(
	call_new_object<
		android::database::StaleDataException::J2CPP_CLASS_NAME,
		android::database::StaleDataException::J2CPP_METHOD_NAME(0),
		android::database::StaleDataException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::database::StaleDataException::StaleDataException(local_ref< java::lang::String > const &a0)
: object<android::database::StaleDataException>(
	call_new_object<
		android::database::StaleDataException::J2CPP_CLASS_NAME,
		android::database::StaleDataException::J2CPP_METHOD_NAME(1),
		android::database::StaleDataException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::database::StaleDataException,"android/database/StaleDataException")
J2CPP_DEFINE_METHOD(android::database::StaleDataException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::StaleDataException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_STALEDATAEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
