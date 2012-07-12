/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.atomic.AtomicBoolean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicBoolean;
	class AtomicBoolean
		: public object<AtomicBoolean>
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

		explicit AtomicBoolean(jobject jobj)
		: object<AtomicBoolean>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;


		AtomicBoolean(jboolean);
		AtomicBoolean();
		jboolean get();
		jboolean compareAndSet(jboolean, jboolean);
		jboolean weakCompareAndSet(jboolean, jboolean);
		void set(jboolean);
		jboolean getAndSet(jboolean);
		local_ref< java::lang::String > toString();
	}; //class AtomicBoolean

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN_HPP_IMPL

namespace j2cpp {



java::util::concurrent::atomic::AtomicBoolean::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::atomic::AtomicBoolean::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::concurrent::atomic::AtomicBoolean::AtomicBoolean(jboolean a0)
: object<java::util::concurrent::atomic::AtomicBoolean>(
	call_new_object<
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_NAME(0),
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::util::concurrent::atomic::AtomicBoolean::AtomicBoolean()
: object<java::util::concurrent::atomic::AtomicBoolean>(
	call_new_object<
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_NAME(1),
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_SIGNATURE(1)
	>()
)
{
}


jboolean java::util::concurrent::atomic::AtomicBoolean::get()
{
	return call_method<
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_NAME(2),
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::atomic::AtomicBoolean::compareAndSet(jboolean a0, jboolean a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_NAME(3),
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::atomic::AtomicBoolean::weakCompareAndSet(jboolean a0, jboolean a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_NAME(4),
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1);
}

void java::util::concurrent::atomic::AtomicBoolean::set(jboolean a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_NAME(5),
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::atomic::AtomicBoolean::getAndSet(jboolean a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_NAME(6),
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::concurrent::atomic::AtomicBoolean::toString()
{
	return call_method<
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_NAME(7),
		java::util::concurrent::atomic::AtomicBoolean::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicBoolean,"java/util/concurrent/atomic/AtomicBoolean")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicBoolean,0,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicBoolean,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicBoolean,2,"get","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicBoolean,3,"compareAndSet","(ZZ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicBoolean,4,"weakCompareAndSet","(ZZ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicBoolean,5,"set","(Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicBoolean,6,"getAndSet","(Z)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicBoolean,7,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION