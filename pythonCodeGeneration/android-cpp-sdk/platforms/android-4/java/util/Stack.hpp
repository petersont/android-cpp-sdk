/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Stack
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_STACK_HPP_DECL
#define J2CPP_JAVA_UTIL_STACK_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }
namespace j2cpp { namespace java { namespace util { class RandomAccess; } } }
namespace j2cpp { namespace java { namespace util { class Vector; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class AbstractList; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/AbstractList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/List.hpp>
#include <java/util/RandomAccess.hpp>
#include <java/util/Vector.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Stack;
	class Stack
		: public object<Stack>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Stack(jobject jobj)
		: object<Stack>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::util::List>() const;
		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::util::RandomAccess>() const;
		operator local_ref<java::util::Vector>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::util::AbstractList>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;


		Stack();
		jboolean empty();
		local_ref< java::lang::Object > peek();
		local_ref< java::lang::Object > pop();
		local_ref< java::lang::Object > push(local_ref< java::lang::Object >  const&);
		jint search(local_ref< java::lang::Object >  const&);
	}; //class Stack

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_STACK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_STACK_HPP_IMPL
#define J2CPP_JAVA_UTIL_STACK_HPP_IMPL

namespace j2cpp {



java::util::Stack::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::Stack::operator local_ref<java::util::List>() const
{
	return local_ref<java::util::List>(get_jobject());
}

java::util::Stack::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::Stack::operator local_ref<java::util::RandomAccess>() const
{
	return local_ref<java::util::RandomAccess>(get_jobject());
}

java::util::Stack::operator local_ref<java::util::Vector>() const
{
	return local_ref<java::util::Vector>(get_jobject());
}

java::util::Stack::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::Stack::operator local_ref<java::util::AbstractList>() const
{
	return local_ref<java::util::AbstractList>(get_jobject());
}

java::util::Stack::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::Stack::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::Stack::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}


java::util::Stack::Stack()
: object<java::util::Stack>(
	call_new_object<
		java::util::Stack::J2CPP_CLASS_NAME,
		java::util::Stack::J2CPP_METHOD_NAME(0),
		java::util::Stack::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean java::util::Stack::empty()
{
	return call_method<
		java::util::Stack::J2CPP_CLASS_NAME,
		java::util::Stack::J2CPP_METHOD_NAME(1),
		java::util::Stack::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::Stack::peek()
{
	return call_method<
		java::util::Stack::J2CPP_CLASS_NAME,
		java::util::Stack::J2CPP_METHOD_NAME(2),
		java::util::Stack::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::Stack::pop()
{
	return call_method<
		java::util::Stack::J2CPP_CLASS_NAME,
		java::util::Stack::J2CPP_METHOD_NAME(3),
		java::util::Stack::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::Stack::push(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Stack::J2CPP_CLASS_NAME,
		java::util::Stack::J2CPP_METHOD_NAME(4),
		java::util::Stack::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jint java::util::Stack::search(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Stack::J2CPP_CLASS_NAME,
		java::util::Stack::J2CPP_METHOD_NAME(5),
		java::util::Stack::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::Stack,"java/util/Stack")
J2CPP_DEFINE_METHOD(java::util::Stack,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::Stack,1,"empty","()Z")
J2CPP_DEFINE_METHOD(java::util::Stack,2,"peek","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Stack,3,"pop","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Stack,4,"push","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Stack,5,"search","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_STACK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
