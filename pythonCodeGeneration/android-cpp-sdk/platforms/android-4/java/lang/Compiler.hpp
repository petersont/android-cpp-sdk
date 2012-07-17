/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Compiler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_COMPILER_HPP_DECL
#define J2CPP_JAVA_LANG_COMPILER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Compiler;
	class Compiler
		: public object<Compiler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Compiler(jobject jobj)
		: object<Compiler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::Object > command(local_ref< java::lang::Object >  const&);
		static jboolean compileClass(local_ref< java::lang::Class >  const&);
		static jboolean compileClasses(local_ref< java::lang::String >  const&);
		static void disable();
		static void enable();
	}; //class Compiler

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_COMPILER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_COMPILER_HPP_IMPL
#define J2CPP_JAVA_LANG_COMPILER_HPP_IMPL

namespace j2cpp {



java::lang::Compiler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::Object > java::lang::Compiler::command(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		java::lang::Compiler::J2CPP_CLASS_NAME,
		java::lang::Compiler::J2CPP_METHOD_NAME(1),
		java::lang::Compiler::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(a0);
}

jboolean java::lang::Compiler::compileClass(local_ref< java::lang::Class > const &a0)
{
	return call_static_method<
		java::lang::Compiler::J2CPP_CLASS_NAME,
		java::lang::Compiler::J2CPP_METHOD_NAME(2),
		java::lang::Compiler::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(a0);
}

jboolean java::lang::Compiler::compileClasses(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::Compiler::J2CPP_CLASS_NAME,
		java::lang::Compiler::J2CPP_METHOD_NAME(3),
		java::lang::Compiler::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(a0);
}

void java::lang::Compiler::disable()
{
	return call_static_method<
		java::lang::Compiler::J2CPP_CLASS_NAME,
		java::lang::Compiler::J2CPP_METHOD_NAME(4),
		java::lang::Compiler::J2CPP_METHOD_SIGNATURE(4), 
		void
	>();
}

void java::lang::Compiler::enable()
{
	return call_static_method<
		java::lang::Compiler::J2CPP_CLASS_NAME,
		java::lang::Compiler::J2CPP_METHOD_NAME(5),
		java::lang::Compiler::J2CPP_METHOD_SIGNATURE(5), 
		void
	>();
}


J2CPP_DEFINE_CLASS(java::lang::Compiler,"java/lang/Compiler")
J2CPP_DEFINE_METHOD(java::lang::Compiler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Compiler,1,"command","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::Compiler,2,"compileClass","(Ljava/lang/Class;)Z")
J2CPP_DEFINE_METHOD(java::lang::Compiler,3,"compileClasses","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::lang::Compiler,4,"disable","()V")
J2CPP_DEFINE_METHOD(java::lang::Compiler,5,"enable","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_COMPILER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
