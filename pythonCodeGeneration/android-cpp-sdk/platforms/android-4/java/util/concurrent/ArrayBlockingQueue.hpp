/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ArrayBlockingQueue
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { class Queue; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class AbstractQueue; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class BlockingQueue; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/AbstractQueue.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Queue.hpp>
#include <java/util/concurrent/BlockingQueue.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ArrayBlockingQueue;
	class ArrayBlockingQueue
		: public object<ArrayBlockingQueue>
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
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)

		explicit ArrayBlockingQueue(jobject jobj)
		: object<ArrayBlockingQueue>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::util::Queue>() const;
		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::util::AbstractQueue>() const;
		operator local_ref<java::util::concurrent::BlockingQueue>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;


		ArrayBlockingQueue(jint);
		ArrayBlockingQueue(jint, jboolean);
		ArrayBlockingQueue(jint, jboolean, local_ref< java::util::Collection > const&);
		jboolean offer(local_ref< java::lang::Object >  const&);
		jboolean offer(local_ref< java::lang::Object >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::lang::Object > poll();
		local_ref< java::lang::Object > poll(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		jboolean remove(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > peek();
		local_ref< java::lang::Object > take();
		void put(local_ref< java::lang::Object >  const&);
		jint size();
		jint remainingCapacity();
		jboolean contains(local_ref< java::lang::Object >  const&);
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::lang::String > toString();
		void clear();
		jint drainTo(local_ref< java::util::Collection >  const&);
		jint drainTo(local_ref< java::util::Collection >  const&, jint);
		local_ref< java::util::Iterator > iterator();
	}; //class ArrayBlockingQueue

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ArrayBlockingQueue::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::ArrayBlockingQueue::operator local_ref<java::util::Queue>() const
{
	return local_ref<java::util::Queue>(get_jobject());
}

java::util::concurrent::ArrayBlockingQueue::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::concurrent::ArrayBlockingQueue::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::concurrent::ArrayBlockingQueue::operator local_ref<java::util::AbstractQueue>() const
{
	return local_ref<java::util::AbstractQueue>(get_jobject());
}

java::util::concurrent::ArrayBlockingQueue::operator local_ref<java::util::concurrent::BlockingQueue>() const
{
	return local_ref<java::util::concurrent::BlockingQueue>(get_jobject());
}

java::util::concurrent::ArrayBlockingQueue::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::ArrayBlockingQueue::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}


java::util::concurrent::ArrayBlockingQueue::ArrayBlockingQueue(jint a0)
: object<java::util::concurrent::ArrayBlockingQueue>(
	call_new_object<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::util::concurrent::ArrayBlockingQueue::ArrayBlockingQueue(jint a0, jboolean a1)
: object<java::util::concurrent::ArrayBlockingQueue>(
	call_new_object<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



java::util::concurrent::ArrayBlockingQueue::ArrayBlockingQueue(jint a0, jboolean a1, local_ref< java::util::Collection > const &a2)
: object<java::util::concurrent::ArrayBlockingQueue>(
	call_new_object<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(2),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


jboolean java::util::concurrent::ArrayBlockingQueue::offer(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(3),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::ArrayBlockingQueue::offer(local_ref< java::lang::Object > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(4),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > java::util::concurrent::ArrayBlockingQueue::poll()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(5),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::ArrayBlockingQueue::poll(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(6),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::ArrayBlockingQueue::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(7),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::ArrayBlockingQueue::peek()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(8),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::ArrayBlockingQueue::take()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(9),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

void java::util::concurrent::ArrayBlockingQueue::put(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(10),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

jint java::util::concurrent::ArrayBlockingQueue::size()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(11),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jint java::util::concurrent::ArrayBlockingQueue::remainingCapacity()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(12),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

jboolean java::util::concurrent::ArrayBlockingQueue::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(13),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::ArrayBlockingQueue::toArray()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(14),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::ArrayBlockingQueue::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(15),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::concurrent::ArrayBlockingQueue::toString()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(16),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void java::util::concurrent::ArrayBlockingQueue::clear()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(17),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject());
}

jint java::util::concurrent::ArrayBlockingQueue::drainTo(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(18),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject(), a0);
}

jint java::util::concurrent::ArrayBlockingQueue::drainTo(local_ref< java::util::Collection > const &a0, jint a1)
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(19),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject(), a0, a1);
}

local_ref< java::util::Iterator > java::util::concurrent::ArrayBlockingQueue::iterator()
{
	return call_method<
		java::util::concurrent::ArrayBlockingQueue::J2CPP_CLASS_NAME,
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_NAME(20),
		java::util::concurrent::ArrayBlockingQueue::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ArrayBlockingQueue,"java/util/concurrent/ArrayBlockingQueue")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,1,"<init>","(IZ)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,2,"<init>","(IZLjava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,3,"offer","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,4,"offer","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,5,"poll","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,6,"poll","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,7,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,8,"peek","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,9,"take","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,10,"put","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,11,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,12,"remainingCapacity","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,13,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,14,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,15,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,16,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,17,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,18,"drainTo","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,19,"drainTo","(Ljava/util/Collection;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ArrayBlockingQueue,20,"iterator","()Ljava/util/Iterator;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
