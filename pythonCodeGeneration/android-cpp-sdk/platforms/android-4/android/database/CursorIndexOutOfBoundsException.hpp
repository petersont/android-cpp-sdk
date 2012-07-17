/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.CursorIndexOutOfBoundsException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class IndexOutOfBoundsException; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace database {

	class CursorIndexOutOfBoundsException;
	class CursorIndexOutOfBoundsException
		: public object<CursorIndexOutOfBoundsException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CursorIndexOutOfBoundsException(jobject jobj)
		: object<CursorIndexOutOfBoundsException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::IndexOutOfBoundsException>() const;


		CursorIndexOutOfBoundsException(jint, jint);
		CursorIndexOutOfBoundsException(local_ref< java::lang::String > const&);
	}; //class CursorIndexOutOfBoundsException

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_HPP_IMPL

namespace j2cpp {



android::database::CursorIndexOutOfBoundsException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::database::CursorIndexOutOfBoundsException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

android::database::CursorIndexOutOfBoundsException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::database::CursorIndexOutOfBoundsException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

android::database::CursorIndexOutOfBoundsException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::database::CursorIndexOutOfBoundsException::operator local_ref<java::lang::IndexOutOfBoundsException>() const
{
	return local_ref<java::lang::IndexOutOfBoundsException>(get_jobject());
}


android::database::CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(jint a0, jint a1)
: object<android::database::CursorIndexOutOfBoundsException>(
	call_new_object<
		android::database::CursorIndexOutOfBoundsException::J2CPP_CLASS_NAME,
		android::database::CursorIndexOutOfBoundsException::J2CPP_METHOD_NAME(0),
		android::database::CursorIndexOutOfBoundsException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::database::CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(local_ref< java::lang::String > const &a0)
: object<android::database::CursorIndexOutOfBoundsException>(
	call_new_object<
		android::database::CursorIndexOutOfBoundsException::J2CPP_CLASS_NAME,
		android::database::CursorIndexOutOfBoundsException::J2CPP_METHOD_NAME(1),
		android::database::CursorIndexOutOfBoundsException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::database::CursorIndexOutOfBoundsException,"android/database/CursorIndexOutOfBoundsException")
J2CPP_DEFINE_METHOD(android::database::CursorIndexOutOfBoundsException,0,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::database::CursorIndexOutOfBoundsException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORINDEXOUTOFBOUNDSEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
