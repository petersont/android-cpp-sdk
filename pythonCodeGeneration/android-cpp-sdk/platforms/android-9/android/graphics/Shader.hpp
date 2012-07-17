/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Shader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_SHADER_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_SHADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Shader_ { class TileMode; } } } }
namespace j2cpp { namespace android { namespace graphics { class Matrix; } } }


#include <android/graphics/Matrix.hpp>
#include <android/graphics/Shader.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Shader;
	namespace Shader_ {

		class TileMode;
		class TileMode
			: public object<TileMode>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit TileMode(jobject jobj)
			: object<TileMode>(jobj)
			{
			}

			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::io::Serializable>() const;


			static local_ref< array< local_ref< android::graphics::Shader_::TileMode >, 1> > values();
			static local_ref< android::graphics::Shader_::TileMode > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Shader_::TileMode > > CLAMP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Shader_::TileMode > > MIRROR;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::Shader_::TileMode > > REPEAT;
		}; //class TileMode

	} //namespace Shader_

	class Shader
		: public object<Shader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		typedef Shader_::TileMode TileMode;

		explicit Shader(jobject jobj)
		: object<Shader>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Shader();
		jboolean getLocalMatrix(local_ref< android::graphics::Matrix >  const&);
		void setLocalMatrix(local_ref< android::graphics::Matrix >  const&);
	}; //class Shader

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_SHADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_SHADER_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_SHADER_HPP_IMPL

namespace j2cpp {




android::graphics::Shader_::TileMode::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::graphics::Shader_::TileMode::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::graphics::Shader_::TileMode::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::Shader_::TileMode::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< array< local_ref< android::graphics::Shader_::TileMode >, 1> > android::graphics::Shader_::TileMode::values()
{
	return call_static_method<
		android::graphics::Shader_::TileMode::J2CPP_CLASS_NAME,
		android::graphics::Shader_::TileMode::J2CPP_METHOD_NAME(0),
		android::graphics::Shader_::TileMode::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::Shader_::TileMode >, 1> >
	>();
}

local_ref< android::graphics::Shader_::TileMode > android::graphics::Shader_::TileMode::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Shader_::TileMode::J2CPP_CLASS_NAME,
		android::graphics::Shader_::TileMode::J2CPP_METHOD_NAME(1),
		android::graphics::Shader_::TileMode::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Shader_::TileMode >
	>(a0);
}




static_field<
	android::graphics::Shader_::TileMode::J2CPP_CLASS_NAME,
	android::graphics::Shader_::TileMode::J2CPP_FIELD_NAME(0),
	android::graphics::Shader_::TileMode::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Shader_::TileMode >
> android::graphics::Shader_::TileMode::CLAMP;

static_field<
	android::graphics::Shader_::TileMode::J2CPP_CLASS_NAME,
	android::graphics::Shader_::TileMode::J2CPP_FIELD_NAME(1),
	android::graphics::Shader_::TileMode::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Shader_::TileMode >
> android::graphics::Shader_::TileMode::MIRROR;

static_field<
	android::graphics::Shader_::TileMode::J2CPP_CLASS_NAME,
	android::graphics::Shader_::TileMode::J2CPP_FIELD_NAME(2),
	android::graphics::Shader_::TileMode::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::Shader_::TileMode >
> android::graphics::Shader_::TileMode::REPEAT;


J2CPP_DEFINE_CLASS(android::graphics::Shader_::TileMode,"android/graphics/Shader$TileMode")
J2CPP_DEFINE_METHOD(android::graphics::Shader_::TileMode,0,"values","()[android.graphics.Shader.TileMode")
J2CPP_DEFINE_METHOD(android::graphics::Shader_::TileMode,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Shader$TileMode;")
J2CPP_DEFINE_METHOD(android::graphics::Shader_::TileMode,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Shader_::TileMode,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Shader_::TileMode,0,"CLAMP","Landroid/graphics/Shader$TileMode;")
J2CPP_DEFINE_FIELD(android::graphics::Shader_::TileMode,1,"MIRROR","Landroid/graphics/Shader$TileMode;")
J2CPP_DEFINE_FIELD(android::graphics::Shader_::TileMode,2,"REPEAT","Landroid/graphics/Shader$TileMode;")
J2CPP_DEFINE_FIELD(android::graphics::Shader_::TileMode,3,"$VALUES","[android.graphics.Shader.TileMode")



android::graphics::Shader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::Shader::Shader()
: object<android::graphics::Shader>(
	call_new_object<
		android::graphics::Shader::J2CPP_CLASS_NAME,
		android::graphics::Shader::J2CPP_METHOD_NAME(0),
		android::graphics::Shader::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean android::graphics::Shader::getLocalMatrix(local_ref< android::graphics::Matrix > const &a0)
{
	return call_method<
		android::graphics::Shader::J2CPP_CLASS_NAME,
		android::graphics::Shader::J2CPP_METHOD_NAME(1),
		android::graphics::Shader::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

void android::graphics::Shader::setLocalMatrix(local_ref< android::graphics::Matrix > const &a0)
{
	return call_method<
		android::graphics::Shader::J2CPP_CLASS_NAME,
		android::graphics::Shader::J2CPP_METHOD_NAME(2),
		android::graphics::Shader::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::graphics::Shader,"android/graphics/Shader")
J2CPP_DEFINE_METHOD(android::graphics::Shader,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Shader,1,"getLocalMatrix","(Landroid/graphics/Matrix;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Shader,2,"setLocalMatrix","(Landroid/graphics/Matrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::Shader,3,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_SHADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
