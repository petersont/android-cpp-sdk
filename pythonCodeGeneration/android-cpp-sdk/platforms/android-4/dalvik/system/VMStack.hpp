/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: dalvik.system.VMStack
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_VMSTACK_HPP_DECL
#define J2CPP_DALVIK_SYSTEM_VMSTACK_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class StackTraceElement; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <java/lang/Class.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/StackTraceElement.hpp>
#include <java/lang/Thread.hpp>


namespace j2cpp {

namespace dalvik { namespace system {

	class VMStack;
	class VMStack
		: public object<VMStack>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit VMStack(jobject jobj)
		: object<VMStack>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		VMStack();
		static local_ref< java::lang::ClassLoader > getCallingClassLoader();
		static local_ref< java::lang::ClassLoader > getCallingClassLoader2();
		static local_ref< array< local_ref< java::lang::Class >, 1> > getClasses(jint, jboolean);
		static local_ref< array< local_ref< java::lang::StackTraceElement >, 1> > getThreadStackTrace(local_ref< java::lang::Thread >  const&);
	}; //class VMStack

} //namespace system
} //namespace dalvik

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_VMSTACK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_VMSTACK_HPP_IMPL
#define J2CPP_DALVIK_SYSTEM_VMSTACK_HPP_IMPL

namespace j2cpp {



dalvik::system::VMStack::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


dalvik::system::VMStack::VMStack()
: object<dalvik::system::VMStack>(
	call_new_object<
		dalvik::system::VMStack::J2CPP_CLASS_NAME,
		dalvik::system::VMStack::J2CPP_METHOD_NAME(0),
		dalvik::system::VMStack::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::lang::ClassLoader > dalvik::system::VMStack::getCallingClassLoader()
{
	return call_static_method<
		dalvik::system::VMStack::J2CPP_CLASS_NAME,
		dalvik::system::VMStack::J2CPP_METHOD_NAME(1),
		dalvik::system::VMStack::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::ClassLoader >
	>();
}

local_ref< java::lang::ClassLoader > dalvik::system::VMStack::getCallingClassLoader2()
{
	return call_static_method<
		dalvik::system::VMStack::J2CPP_CLASS_NAME,
		dalvik::system::VMStack::J2CPP_METHOD_NAME(2),
		dalvik::system::VMStack::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::ClassLoader >
	>();
}

local_ref< array< local_ref< java::lang::Class >, 1> > dalvik::system::VMStack::getClasses(jint a0, jboolean a1)
{
	return call_static_method<
		dalvik::system::VMStack::J2CPP_CLASS_NAME,
		dalvik::system::VMStack::J2CPP_METHOD_NAME(3),
		dalvik::system::VMStack::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array< local_ref< java::lang::Class >, 1> >
	>(a0, a1);
}

local_ref< array< local_ref< java::lang::StackTraceElement >, 1> > dalvik::system::VMStack::getThreadStackTrace(local_ref< java::lang::Thread > const &a0)
{
	return call_static_method<
		dalvik::system::VMStack::J2CPP_CLASS_NAME,
		dalvik::system::VMStack::J2CPP_METHOD_NAME(4),
		dalvik::system::VMStack::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< java::lang::StackTraceElement >, 1> >
	>(a0);
}


J2CPP_DEFINE_CLASS(dalvik::system::VMStack,"dalvik/system/VMStack")
J2CPP_DEFINE_METHOD(dalvik::system::VMStack,0,"<init>","()V")
J2CPP_DEFINE_METHOD(dalvik::system::VMStack,1,"getCallingClassLoader","()Ljava/lang/ClassLoader;")
J2CPP_DEFINE_METHOD(dalvik::system::VMStack,2,"getCallingClassLoader2","()Ljava/lang/ClassLoader;")
J2CPP_DEFINE_METHOD(dalvik::system::VMStack,3,"getClasses","(IZ)[java.lang.Class")
J2CPP_DEFINE_METHOD(dalvik::system::VMStack,4,"getThreadStackTrace","(Ljava/lang/Thread;)[java.lang.StackTraceElement")

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_VMSTACK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
