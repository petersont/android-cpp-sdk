/*================================================================================
  code generated by: java2cpp
  class: android.util.TimingLogger
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_TIMINGLOGGER_HPP_DECL
#define J2CPP_ANDROID_UTIL_TIMINGLOGGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class TimingLogger;
	class TimingLogger
		: public cpp_object<TimingLogger>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit TimingLogger(jobject jobj)
		: cpp_object<TimingLogger>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TimingLogger(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void reset(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void reset();
		void addSplit(local_ref< java::lang::String > const&);
		void dumpToLog();
	}; //class TimingLogger

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_TIMINGLOGGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_TIMINGLOGGER_HPP_IMPL
#define J2CPP_ANDROID_UTIL_TIMINGLOGGER_HPP_IMPL

namespace j2cpp {



android::util::TimingLogger::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::util::TimingLogger::TimingLogger(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: cpp_object<android::util::TimingLogger>(
	environment::get().get_jenv()->NewObject(
		get_class<android::util::TimingLogger::J2CPP_CLASS_NAME>(),
		get_method_id<android::util::TimingLogger::J2CPP_CLASS_NAME, android::util::TimingLogger::J2CPP_METHOD_NAME(0), android::util::TimingLogger::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


void android::util::TimingLogger::reset(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::util::TimingLogger::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::util::TimingLogger::addSplit(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::util::TimingLogger::dumpToLog()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::util::TimingLogger,"android/util/TimingLogger")
J2CPP_DEFINE_METHOD(android::util::TimingLogger,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::util::TimingLogger,1,"reset","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::util::TimingLogger,2,"reset","()V")
J2CPP_DEFINE_METHOD(android::util::TimingLogger,3,"addSplit","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::util::TimingLogger,4,"dumpToLog","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_TIMINGLOGGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION