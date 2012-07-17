/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.ActivityNotFoundException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ActivityNotFoundException;
	class ActivityNotFoundException
		: public object<ActivityNotFoundException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ActivityNotFoundException(jobject jobj)
		: object<ActivityNotFoundException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		ActivityNotFoundException();
		ActivityNotFoundException(local_ref< java::lang::String > const&);
	}; //class ActivityNotFoundException

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION_HPP_IMPL

namespace j2cpp {



android::content::ActivityNotFoundException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::content::ActivityNotFoundException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

android::content::ActivityNotFoundException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::content::ActivityNotFoundException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

android::content::ActivityNotFoundException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::ActivityNotFoundException::ActivityNotFoundException()
: object<android::content::ActivityNotFoundException>(
	call_new_object<
		android::content::ActivityNotFoundException::J2CPP_CLASS_NAME,
		android::content::ActivityNotFoundException::J2CPP_METHOD_NAME(0),
		android::content::ActivityNotFoundException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::content::ActivityNotFoundException::ActivityNotFoundException(local_ref< java::lang::String > const &a0)
: object<android::content::ActivityNotFoundException>(
	call_new_object<
		android::content::ActivityNotFoundException::J2CPP_CLASS_NAME,
		android::content::ActivityNotFoundException::J2CPP_METHOD_NAME(1),
		android::content::ActivityNotFoundException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::content::ActivityNotFoundException,"android/content/ActivityNotFoundException")
J2CPP_DEFINE_METHOD(android::content::ActivityNotFoundException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::ActivityNotFoundException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ACTIVITYNOTFOUNDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
