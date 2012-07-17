/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: junit.framework.TestListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTLISTENER_HPP_DECL
#define J2CPP_JUNIT_FRAMEWORK_TESTLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class AssertionFailedError; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>
#include <junit/framework/AssertionFailedError.hpp>
#include <junit/framework/Test.hpp>


namespace j2cpp {

namespace junit { namespace framework {

	class TestListener;
	class TestListener
		: public object<TestListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit TestListener(jobject jobj)
		: object<TestListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void addError(local_ref< junit::framework::Test >  const&, local_ref< java::lang::Throwable >  const&);
		void addFailure(local_ref< junit::framework::Test >  const&, local_ref< junit::framework::AssertionFailedError >  const&);
		void endTest(local_ref< junit::framework::Test >  const&);
		void startTest(local_ref< junit::framework::Test >  const&);
	}; //class TestListener

} //namespace framework
} //namespace junit

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTLISTENER_HPP_IMPL
#define J2CPP_JUNIT_FRAMEWORK_TESTLISTENER_HPP_IMPL

namespace j2cpp {



junit::framework::TestListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void junit::framework::TestListener::addError(local_ref< junit::framework::Test > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return call_method<
		junit::framework::TestListener::J2CPP_CLASS_NAME,
		junit::framework::TestListener::J2CPP_METHOD_NAME(0),
		junit::framework::TestListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}

void junit::framework::TestListener::addFailure(local_ref< junit::framework::Test > const &a0, local_ref< junit::framework::AssertionFailedError > const &a1)
{
	return call_method<
		junit::framework::TestListener::J2CPP_CLASS_NAME,
		junit::framework::TestListener::J2CPP_METHOD_NAME(1),
		junit::framework::TestListener::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

void junit::framework::TestListener::endTest(local_ref< junit::framework::Test > const &a0)
{
	return call_method<
		junit::framework::TestListener::J2CPP_CLASS_NAME,
		junit::framework::TestListener::J2CPP_METHOD_NAME(2),
		junit::framework::TestListener::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void junit::framework::TestListener::startTest(local_ref< junit::framework::Test > const &a0)
{
	return call_method<
		junit::framework::TestListener::J2CPP_CLASS_NAME,
		junit::framework::TestListener::J2CPP_METHOD_NAME(3),
		junit::framework::TestListener::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(junit::framework::TestListener,"junit/framework/TestListener")
J2CPP_DEFINE_METHOD(junit::framework::TestListener,0,"addError","(Ljunit/framework/Test;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestListener,1,"addFailure","(Ljunit/framework/Test;Ljunit/framework/AssertionFailedError;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestListener,2,"endTest","(Ljunit/framework/Test;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestListener,3,"startTest","(Ljunit/framework/Test;)V")

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
