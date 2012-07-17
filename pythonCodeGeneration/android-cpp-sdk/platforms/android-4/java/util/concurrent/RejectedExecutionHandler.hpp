/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.RejectedExecutionHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace util { namespace concurrent { class ThreadPoolExecutor; } } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/util/concurrent/ThreadPoolExecutor.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class RejectedExecutionHandler;
	class RejectedExecutionHandler
		: public object<RejectedExecutionHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit RejectedExecutionHandler(jobject jobj)
		: object<RejectedExecutionHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void rejectedExecution(local_ref< java::lang::Runnable >  const&, local_ref< java::util::concurrent::ThreadPoolExecutor >  const&);
	}; //class RejectedExecutionHandler

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_IMPL

namespace j2cpp {



java::util::concurrent::RejectedExecutionHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::util::concurrent::RejectedExecutionHandler::rejectedExecution(local_ref< java::lang::Runnable > const &a0, local_ref< java::util::concurrent::ThreadPoolExecutor > const &a1)
{
	return call_method<
		java::util::concurrent::RejectedExecutionHandler::J2CPP_CLASS_NAME,
		java::util::concurrent::RejectedExecutionHandler::J2CPP_METHOD_NAME(0),
		java::util::concurrent::RejectedExecutionHandler::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::RejectedExecutionHandler,"java/util/concurrent/RejectedExecutionHandler")
J2CPP_DEFINE_METHOD(java::util::concurrent::RejectedExecutionHandler,0,"rejectedExecution","(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
