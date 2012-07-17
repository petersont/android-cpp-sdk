/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.AsyncTask
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_ASYNCTASK_HPP_DECL
#define J2CPP_ANDROID_OS_ASYNCTASK_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace AsyncTask_ { class Status; } } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/AsyncTask.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace android { namespace os {

	class AsyncTask;
	namespace AsyncTask_ {

		class Status;
		class Status
			: public object<Status>
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

			explicit Status(jobject jobj)
			: object<Status>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;


			static local_ref< array< local_ref< android::os::AsyncTask_::Status >, 1> > values();
			static local_ref< android::os::AsyncTask_::Status > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::AsyncTask_::Status > > FINISHED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::os::AsyncTask_::Status > > PENDING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::os::AsyncTask_::Status > > RUNNING;
		}; //class Status

	} //namespace AsyncTask_

	class AsyncTask
		: public object<AsyncTask>
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
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)

		typedef AsyncTask_::Status Status;

		explicit AsyncTask(jobject jobj)
		: object<AsyncTask>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AsyncTask();
		local_ref< android::os::AsyncTask_::Status > getStatus();
		jboolean isCancelled();
		jboolean cancel(jboolean);
		local_ref< java::lang::Object > get();
		local_ref< java::lang::Object > get(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< android::os::AsyncTask > execute(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
	}; //class AsyncTask

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_ASYNCTASK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_ASYNCTASK_HPP_IMPL
#define J2CPP_ANDROID_OS_ASYNCTASK_HPP_IMPL

namespace j2cpp {




android::os::AsyncTask_::Status::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::os::AsyncTask_::Status::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::os::AsyncTask_::Status::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::os::AsyncTask_::Status::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< array< local_ref< android::os::AsyncTask_::Status >, 1> > android::os::AsyncTask_::Status::values()
{
	return call_static_method<
		android::os::AsyncTask_::Status::J2CPP_CLASS_NAME,
		android::os::AsyncTask_::Status::J2CPP_METHOD_NAME(0),
		android::os::AsyncTask_::Status::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::os::AsyncTask_::Status >, 1> >
	>();
}

local_ref< android::os::AsyncTask_::Status > android::os::AsyncTask_::Status::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::os::AsyncTask_::Status::J2CPP_CLASS_NAME,
		android::os::AsyncTask_::Status::J2CPP_METHOD_NAME(1),
		android::os::AsyncTask_::Status::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::os::AsyncTask_::Status >
	>(a0);
}




static_field<
	android::os::AsyncTask_::Status::J2CPP_CLASS_NAME,
	android::os::AsyncTask_::Status::J2CPP_FIELD_NAME(0),
	android::os::AsyncTask_::Status::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::AsyncTask_::Status >
> android::os::AsyncTask_::Status::FINISHED;

static_field<
	android::os::AsyncTask_::Status::J2CPP_CLASS_NAME,
	android::os::AsyncTask_::Status::J2CPP_FIELD_NAME(1),
	android::os::AsyncTask_::Status::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::os::AsyncTask_::Status >
> android::os::AsyncTask_::Status::PENDING;

static_field<
	android::os::AsyncTask_::Status::J2CPP_CLASS_NAME,
	android::os::AsyncTask_::Status::J2CPP_FIELD_NAME(2),
	android::os::AsyncTask_::Status::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::os::AsyncTask_::Status >
> android::os::AsyncTask_::Status::RUNNING;


J2CPP_DEFINE_CLASS(android::os::AsyncTask_::Status,"android/os/AsyncTask$Status")
J2CPP_DEFINE_METHOD(android::os::AsyncTask_::Status,0,"values","()[android.os.AsyncTask.Status")
J2CPP_DEFINE_METHOD(android::os::AsyncTask_::Status,1,"valueOf","(Ljava/lang/String;)Landroid/os/AsyncTask$Status;")
J2CPP_DEFINE_METHOD(android::os::AsyncTask_::Status,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::os::AsyncTask_::Status,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::AsyncTask_::Status,0,"FINISHED","Landroid/os/AsyncTask$Status;")
J2CPP_DEFINE_FIELD(android::os::AsyncTask_::Status,1,"PENDING","Landroid/os/AsyncTask$Status;")
J2CPP_DEFINE_FIELD(android::os::AsyncTask_::Status,2,"RUNNING","Landroid/os/AsyncTask$Status;")
J2CPP_DEFINE_FIELD(android::os::AsyncTask_::Status,3,"$VALUES","[android.os.AsyncTask.Status")



android::os::AsyncTask::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::AsyncTask::AsyncTask()
: object<android::os::AsyncTask>(
	call_new_object<
		android::os::AsyncTask::J2CPP_CLASS_NAME,
		android::os::AsyncTask::J2CPP_METHOD_NAME(0),
		android::os::AsyncTask::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< android::os::AsyncTask_::Status > android::os::AsyncTask::getStatus()
{
	return call_method<
		android::os::AsyncTask::J2CPP_CLASS_NAME,
		android::os::AsyncTask::J2CPP_METHOD_NAME(1),
		android::os::AsyncTask::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::os::AsyncTask_::Status >
	>(get_jobject());
}






jboolean android::os::AsyncTask::isCancelled()
{
	return call_method<
		android::os::AsyncTask::J2CPP_CLASS_NAME,
		android::os::AsyncTask::J2CPP_METHOD_NAME(7),
		android::os::AsyncTask::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

jboolean android::os::AsyncTask::cancel(jboolean a0)
{
	return call_method<
		android::os::AsyncTask::J2CPP_CLASS_NAME,
		android::os::AsyncTask::J2CPP_METHOD_NAME(8),
		android::os::AsyncTask::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > android::os::AsyncTask::get()
{
	return call_method<
		android::os::AsyncTask::J2CPP_CLASS_NAME,
		android::os::AsyncTask::J2CPP_METHOD_NAME(9),
		android::os::AsyncTask::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > android::os::AsyncTask::get(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		android::os::AsyncTask::J2CPP_CLASS_NAME,
		android::os::AsyncTask::J2CPP_METHOD_NAME(10),
		android::os::AsyncTask::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

local_ref< android::os::AsyncTask > android::os::AsyncTask::execute(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		android::os::AsyncTask::J2CPP_CLASS_NAME,
		android::os::AsyncTask::J2CPP_METHOD_NAME(11),
		android::os::AsyncTask::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::os::AsyncTask >
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::os::AsyncTask,"android/os/AsyncTask")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,1,"getStatus","()Landroid/os/AsyncTask$Status;")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,2,"doInBackground","([java.lang.Object)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,3,"onPreExecute","()V")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,4,"onPostExecute","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,5,"onProgressUpdate","([java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,6,"onCancelled","()V")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,7,"isCancelled","()Z")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,8,"cancel","(Z)Z")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,9,"get","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,10,"get","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,11,"execute","([java.lang.Object)Landroid/os/AsyncTask;")
J2CPP_DEFINE_METHOD(android::os::AsyncTask,12,"publishProgress","([java.lang.Object)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_ASYNCTASK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
