/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Set
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SET_HPP_DECL
#define J2CPP_JAVA_UTIL_SET_HPP_DECL


namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }


#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Set;
	class Set
		: public object<Set>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)

		explicit Set(jobject jobj)
		: object<Set>(jobj)
		{
		}

		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;


		jboolean add(local_ref< java::lang::Object >  const&);
		jboolean addAll(local_ref< java::util::Collection >  const&);
		void clear();
		jboolean contains(local_ref< java::lang::Object >  const&);
		jboolean containsAll(local_ref< java::util::Collection >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		jboolean isEmpty();
		local_ref< java::util::Iterator > iterator();
		jboolean remove(local_ref< java::lang::Object >  const&);
		jboolean removeAll(local_ref< java::util::Collection >  const&);
		jboolean retainAll(local_ref< java::util::Collection >  const&);
		jint size();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
	}; //class Set

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SET_HPP_IMPL
#define J2CPP_JAVA_UTIL_SET_HPP_IMPL

namespace j2cpp {



java::util::Set::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::Set::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::Set::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}

jboolean java::util::Set::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(0),
		java::util::Set::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::Set::addAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(1),
		java::util::Set::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::Set::clear()
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(2),
		java::util::Set::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

jboolean java::util::Set::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(3),
		java::util::Set::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::Set::containsAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(4),
		java::util::Set::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::Set::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(5),
		java::util::Set::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::Set::hashCode()
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(6),
		java::util::Set::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jboolean java::util::Set::isEmpty()
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(7),
		java::util::Set::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

local_ref< java::util::Iterator > java::util::Set::iterator()
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(8),
		java::util::Set::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}

jboolean java::util::Set::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(9),
		java::util::Set::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::Set::removeAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(10),
		java::util::Set::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::Set::retainAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(11),
		java::util::Set::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::Set::size()
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(12),
		java::util::Set::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::Set::toArray()
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(13),
		java::util::Set::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::Set::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::Set::J2CPP_CLASS_NAME,
		java::util::Set::J2CPP_METHOD_NAME(14),
		java::util::Set::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::Set,"java/util/Set")
J2CPP_DEFINE_METHOD(java::util::Set,0,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Set,1,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::Set,2,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::Set,3,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Set,4,"containsAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::Set,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Set,6,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::Set,7,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::Set,8,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::Set,9,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Set,10,"removeAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::Set,11,"retainAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::Set,12,"size","()I")
J2CPP_DEFINE_METHOD(java::util::Set,13,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::Set,14,"toArray","([java.lang.Object)[java.lang.Object")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
