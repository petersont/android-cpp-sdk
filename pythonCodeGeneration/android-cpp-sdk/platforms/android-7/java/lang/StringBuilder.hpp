/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.StringBuilder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_STRINGBUILDER_HPP_DECL
#define J2CPP_JAVA_LANG_STRINGBUILDER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class AbstractStringBuilder; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/AbstractStringBuilder.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class StringBuilder;
	class StringBuilder
		: public object<StringBuilder>
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
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)

		explicit StringBuilder(jobject jobj)
		: object<StringBuilder>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Appendable>() const;
		operator local_ref<java::lang::CharSequence>() const;
		operator local_ref<java::lang::AbstractStringBuilder>() const;


		StringBuilder();
		StringBuilder(jint);
		StringBuilder(local_ref< java::lang::CharSequence > const&);
		StringBuilder(local_ref< java::lang::String > const&);
		local_ref< java::lang::StringBuilder > append(jboolean);
		local_ref< java::lang::StringBuilder > append(jchar);
		local_ref< java::lang::StringBuilder > append(jint);
		local_ref< java::lang::StringBuilder > append(jlong);
		local_ref< java::lang::StringBuilder > append(jfloat);
		local_ref< java::lang::StringBuilder > append(jdouble);
		local_ref< java::lang::StringBuilder > append(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::StringBuilder > append(local_ref< java::lang::String >  const&);
		local_ref< java::lang::StringBuilder > append(local_ref< java::lang::StringBuffer >  const&);
		local_ref< java::lang::StringBuilder > append(local_ref< array<jchar,1> >  const&);
		local_ref< java::lang::StringBuilder > append(local_ref< array<jchar,1> >  const&, jint, jint);
		local_ref< java::lang::StringBuilder > append(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::StringBuilder > append(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::StringBuilder > appendCodePoint(jint);
		local_ref< java::lang::StringBuilder > delete_(jint, jint);
		local_ref< java::lang::StringBuilder > deleteCharAt(jint);
		local_ref< java::lang::StringBuilder > insert(jint, jboolean);
		local_ref< java::lang::StringBuilder > insert(jint, jchar);
		local_ref< java::lang::StringBuilder > insert(jint, jint);
		local_ref< java::lang::StringBuilder > insert(jint, jlong);
		local_ref< java::lang::StringBuilder > insert(jint, jfloat);
		local_ref< java::lang::StringBuilder > insert(jint, jdouble);
		local_ref< java::lang::StringBuilder > insert(jint, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::StringBuilder > insert(jint, local_ref< java::lang::String >  const&);
		local_ref< java::lang::StringBuilder > insert(jint, local_ref< array<jchar,1> >  const&);
		local_ref< java::lang::StringBuilder > insert(jint, local_ref< array<jchar,1> >  const&, jint, jint);
		local_ref< java::lang::StringBuilder > insert(jint, local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::StringBuilder > insert(jint, local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::StringBuilder > replace(jint, jint, local_ref< java::lang::String >  const&);
		local_ref< java::lang::StringBuilder > reverse();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::Appendable > append_1(jchar);
	}; //class StringBuilder

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_STRINGBUILDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_STRINGBUILDER_HPP_IMPL
#define J2CPP_JAVA_LANG_STRINGBUILDER_HPP_IMPL

namespace j2cpp {



java::lang::StringBuilder::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::StringBuilder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::StringBuilder::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}

java::lang::StringBuilder::operator local_ref<java::lang::CharSequence>() const
{
	return local_ref<java::lang::CharSequence>(get_jobject());
}

java::lang::StringBuilder::operator local_ref<java::lang::AbstractStringBuilder>() const
{
	return local_ref<java::lang::AbstractStringBuilder>(get_jobject());
}


java::lang::StringBuilder::StringBuilder()
: object<java::lang::StringBuilder>(
	call_new_object<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(0),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::StringBuilder::StringBuilder(jint a0)
: object<java::lang::StringBuilder>(
	call_new_object<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(1),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::lang::StringBuilder::StringBuilder(local_ref< java::lang::CharSequence > const &a0)
: object<java::lang::StringBuilder>(
	call_new_object<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(2),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



java::lang::StringBuilder::StringBuilder(local_ref< java::lang::String > const &a0)
: object<java::lang::StringBuilder>(
	call_new_object<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(3),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}


local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(jboolean a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(4),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(jchar a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(5),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(jint a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(6),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(jlong a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(7),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(jfloat a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(8),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(jdouble a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(9),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(10),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(11),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(local_ref< java::lang::StringBuffer > const &a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(12),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(local_ref< array<jchar,1> > const &a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(13),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(14),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(15),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::append(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(16),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::appendCodePoint(jint a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(17),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::delete_(jint a0, jint a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(18),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::deleteCharAt(jint a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(19),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, jboolean a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(20),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, jchar a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(21),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, jint a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(22),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, jlong a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(23),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, jfloat a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(24),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, jdouble a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(25),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(26),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(27),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, local_ref< array<jchar,1> > const &a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(28),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, local_ref< array<jchar,1> > const &a1, jint a2, jint a3)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(29),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, local_ref< java::lang::CharSequence > const &a1)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(30),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::insert(jint a0, local_ref< java::lang::CharSequence > const &a1, jint a2, jint a3)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(31),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::replace(jint a0, jint a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(32),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuilder > java::lang::StringBuilder::reverse()
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(33),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::lang::StringBuilder >
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::StringBuilder::toString()
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(34),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Appendable > java::lang::StringBuilder::append_1(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(35),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(35), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Appendable > java::lang::StringBuilder::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(36),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::lang::StringBuilder::append_1(jchar a0)
{
	return call_method<
		java::lang::StringBuilder::J2CPP_CLASS_NAME,
		java::lang::StringBuilder::J2CPP_METHOD_NAME(37),
		java::lang::StringBuilder::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::lang::Appendable >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::lang::StringBuilder,"java/lang/StringBuilder")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,2,"<init>","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,4,"append","(Z)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,5,"append","(C)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,6,"append","(I)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,7,"append","(J)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,8,"append","(F)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,9,"append","(D)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,10,"append","(Ljava/lang/Object;)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,11,"append","(Ljava/lang/String;)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,12,"append","(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,13,"append","([C)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,14,"append","([CII)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,15,"append","(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,16,"append","(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,17,"appendCodePoint","(I)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,18,"delete","(II)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,19,"deleteCharAt","(I)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,20,"insert","(IZ)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,21,"insert","(IC)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,22,"insert","(II)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,23,"insert","(IJ)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,24,"insert","(IF)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,25,"insert","(ID)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,26,"insert","(ILjava/lang/Object;)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,27,"insert","(ILjava/lang/String;)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,28,"insert","(I[C)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,29,"insert","(I[CII)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,30,"insert","(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,31,"insert","(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,32,"replace","(IILjava/lang/String;)Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,33,"reverse","()Ljava/lang/StringBuilder;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,34,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,35,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,36,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::lang::StringBuilder,37,"append","(C)Ljava/lang/Appendable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_STRINGBUILDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
