/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ThreadFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_THREADFACTORY_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_THREADFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/Thread.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ThreadFactory;
	class ThreadFactory
		: public object<ThreadFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ThreadFactory(jobject jobj)
		: object<ThreadFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Thread > newThread(local_ref< java::lang::Runnable >  const&);
	}; //class ThreadFactory

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_THREADFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_THREADFACTORY_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_THREADFACTORY_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ThreadFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Thread > java::util::concurrent::ThreadFactory::newThread(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		java::util::concurrent::ThreadFactory::J2CPP_CLASS_NAME,
		java::util::concurrent::ThreadFactory::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ThreadFactory::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Thread >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ThreadFactory,"java/util/concurrent/ThreadFactory")
J2CPP_DEFINE_METHOD(java::util::concurrent::ThreadFactory,0,"newThread","(Ljava/lang/Runnable;)Ljava/lang/Thread;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_THREADFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
