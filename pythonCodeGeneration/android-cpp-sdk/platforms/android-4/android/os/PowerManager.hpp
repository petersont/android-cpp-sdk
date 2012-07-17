/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.PowerManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_POWERMANAGER_HPP_DECL
#define J2CPP_ANDROID_OS_POWERMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace PowerManager_ { class WakeLock; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/PowerManager.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class PowerManager;
	namespace PowerManager_ {

		class WakeLock;
		class WakeLock
			: public object<WakeLock>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_METHOD(5)
			J2CPP_DECLARE_METHOD(6)
			J2CPP_DECLARE_METHOD(7)
			J2CPP_DECLARE_FIELD(0)

			explicit WakeLock(jobject jobj)
			: object<WakeLock>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void setReferenceCounted(jboolean);
			void acquire();
			void acquire(jlong);
			void release();
			jboolean isHeld();
			local_ref< java::lang::String > toString();

		}; //class WakeLock

	} //namespace PowerManager_

	class PowerManager
		: public object<PowerManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		typedef PowerManager_::WakeLock WakeLock;

		explicit PowerManager(jobject jobj)
		: object<PowerManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::os::PowerManager_::WakeLock > newWakeLock(jint, local_ref< java::lang::String >  const&);
		void userActivity(jlong, jboolean);
		void goToSleep(jlong);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > PARTIAL_WAKE_LOCK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > FULL_WAKE_LOCK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > SCREEN_BRIGHT_WAKE_LOCK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > SCREEN_DIM_WAKE_LOCK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > ACQUIRE_CAUSES_WAKEUP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > ON_AFTER_RELEASE;
	}; //class PowerManager

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_POWERMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_POWERMANAGER_HPP_IMPL
#define J2CPP_ANDROID_OS_POWERMANAGER_HPP_IMPL

namespace j2cpp {




android::os::PowerManager_::WakeLock::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::os::PowerManager_::WakeLock::setReferenceCounted(jboolean a0)
{
	return call_method<
		android::os::PowerManager_::WakeLock::J2CPP_CLASS_NAME,
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_NAME(1),
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::os::PowerManager_::WakeLock::acquire()
{
	return call_method<
		android::os::PowerManager_::WakeLock::J2CPP_CLASS_NAME,
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_NAME(2),
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void android::os::PowerManager_::WakeLock::acquire(jlong a0)
{
	return call_method<
		android::os::PowerManager_::WakeLock::J2CPP_CLASS_NAME,
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_NAME(3),
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::os::PowerManager_::WakeLock::release()
{
	return call_method<
		android::os::PowerManager_::WakeLock::J2CPP_CLASS_NAME,
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_NAME(4),
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

jboolean android::os::PowerManager_::WakeLock::isHeld()
{
	return call_method<
		android::os::PowerManager_::WakeLock::J2CPP_CLASS_NAME,
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_NAME(5),
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::String > android::os::PowerManager_::WakeLock::toString()
{
	return call_method<
		android::os::PowerManager_::WakeLock::J2CPP_CLASS_NAME,
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_NAME(6),
		android::os::PowerManager_::WakeLock::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}




J2CPP_DEFINE_CLASS(android::os::PowerManager_::WakeLock,"android/os/PowerManager$WakeLock")
J2CPP_DEFINE_METHOD(android::os::PowerManager_::WakeLock,0,"<init>","(Landroid/os/PowerManager;)V")
J2CPP_DEFINE_METHOD(android::os::PowerManager_::WakeLock,1,"setReferenceCounted","(Z)V")
J2CPP_DEFINE_METHOD(android::os::PowerManager_::WakeLock,2,"acquire","()V")
J2CPP_DEFINE_METHOD(android::os::PowerManager_::WakeLock,3,"acquire","(J)V")
J2CPP_DEFINE_METHOD(android::os::PowerManager_::WakeLock,4,"release","()V")
J2CPP_DEFINE_METHOD(android::os::PowerManager_::WakeLock,5,"isHeld","()Z")
J2CPP_DEFINE_METHOD(android::os::PowerManager_::WakeLock,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::PowerManager_::WakeLock,7,"finalize","()V")
J2CPP_DEFINE_FIELD(android::os::PowerManager_::WakeLock,0,"this$0","Landroid/os/PowerManager;")



android::os::PowerManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::os::PowerManager_::WakeLock > android::os::PowerManager::newWakeLock(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::os::PowerManager::J2CPP_CLASS_NAME,
		android::os::PowerManager::J2CPP_METHOD_NAME(1),
		android::os::PowerManager::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::os::PowerManager_::WakeLock >
	>(get_jobject(), a0, a1);
}

void android::os::PowerManager::userActivity(jlong a0, jboolean a1)
{
	return call_method<
		android::os::PowerManager::J2CPP_CLASS_NAME,
		android::os::PowerManager::J2CPP_METHOD_NAME(2),
		android::os::PowerManager::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void android::os::PowerManager::goToSleep(jlong a0)
{
	return call_method<
		android::os::PowerManager::J2CPP_CLASS_NAME,
		android::os::PowerManager::J2CPP_METHOD_NAME(3),
		android::os::PowerManager::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::os::PowerManager::J2CPP_CLASS_NAME,
	android::os::PowerManager::J2CPP_FIELD_NAME(0),
	android::os::PowerManager::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::os::PowerManager::PARTIAL_WAKE_LOCK;

static_field<
	android::os::PowerManager::J2CPP_CLASS_NAME,
	android::os::PowerManager::J2CPP_FIELD_NAME(1),
	android::os::PowerManager::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::os::PowerManager::FULL_WAKE_LOCK;

static_field<
	android::os::PowerManager::J2CPP_CLASS_NAME,
	android::os::PowerManager::J2CPP_FIELD_NAME(2),
	android::os::PowerManager::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::os::PowerManager::SCREEN_BRIGHT_WAKE_LOCK;

static_field<
	android::os::PowerManager::J2CPP_CLASS_NAME,
	android::os::PowerManager::J2CPP_FIELD_NAME(3),
	android::os::PowerManager::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::os::PowerManager::SCREEN_DIM_WAKE_LOCK;

static_field<
	android::os::PowerManager::J2CPP_CLASS_NAME,
	android::os::PowerManager::J2CPP_FIELD_NAME(4),
	android::os::PowerManager::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::os::PowerManager::ACQUIRE_CAUSES_WAKEUP;

static_field<
	android::os::PowerManager::J2CPP_CLASS_NAME,
	android::os::PowerManager::J2CPP_FIELD_NAME(5),
	android::os::PowerManager::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::os::PowerManager::ON_AFTER_RELEASE;


J2CPP_DEFINE_CLASS(android::os::PowerManager,"android/os/PowerManager")
J2CPP_DEFINE_METHOD(android::os::PowerManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::PowerManager,1,"newWakeLock","(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;")
J2CPP_DEFINE_METHOD(android::os::PowerManager,2,"userActivity","(JZ)V")
J2CPP_DEFINE_METHOD(android::os::PowerManager,3,"goToSleep","(J)V")
J2CPP_DEFINE_FIELD(android::os::PowerManager,0,"PARTIAL_WAKE_LOCK","I")
J2CPP_DEFINE_FIELD(android::os::PowerManager,1,"FULL_WAKE_LOCK","I")
J2CPP_DEFINE_FIELD(android::os::PowerManager,2,"SCREEN_BRIGHT_WAKE_LOCK","I")
J2CPP_DEFINE_FIELD(android::os::PowerManager,3,"SCREEN_DIM_WAKE_LOCK","I")
J2CPP_DEFINE_FIELD(android::os::PowerManager,4,"ACQUIRE_CAUSES_WAKEUP","I")
J2CPP_DEFINE_FIELD(android::os::PowerManager,5,"ON_AFTER_RELEASE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_POWERMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
