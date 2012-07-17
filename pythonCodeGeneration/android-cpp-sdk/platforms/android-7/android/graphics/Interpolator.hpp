/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Interpolator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_INTERPOLATOR_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_INTERPOLATOR_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Interpolator_ { class Result; } } } }


#include <android/graphics/Interpolator.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Interpolator;
	namespace Interpolator_ {

		class Result;
		class Result
			: public object<Result>
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

			explicit Result(jobject jobj)
			: object<Result>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Comparable>() const;


			static local_ref< array< local_ref< android::graphics::Interpolator_::Result >, 1> > values();
			static local_ref< android::graphics::Interpolator_::Result > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Interpolator_::Result > > FREEZE_END;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Interpolator_::Result > > FREEZE_START;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::Interpolator_::Result > > NORMAL;
		}; //class Result

	} //namespace Interpolator_

	class Interpolator
		: public object<Interpolator>
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

		typedef Interpolator_::Result Result;

		explicit Interpolator(jobject jobj)
		: object<Interpolator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Interpolator(jint);
		Interpolator(jint, jint);
		void reset(jint);
		void reset(jint, jint);
		jint getKeyFrameCount();
		jint getValueCount();
		void setKeyFrame(jint, jint, local_ref< array<jfloat,1> >  const&);
		void setKeyFrame(jint, jint, local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&);
		void setRepeatMirror(jfloat, jboolean);
		local_ref< android::graphics::Interpolator_::Result > timeToValues(local_ref< array<jfloat,1> >  const&);
		local_ref< android::graphics::Interpolator_::Result > timeToValues(jint, local_ref< array<jfloat,1> >  const&);
	}; //class Interpolator

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_INTERPOLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_INTERPOLATOR_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_INTERPOLATOR_HPP_IMPL

namespace j2cpp {




android::graphics::Interpolator_::Result::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::graphics::Interpolator_::Result::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::Interpolator_::Result::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::graphics::Interpolator_::Result::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

local_ref< array< local_ref< android::graphics::Interpolator_::Result >, 1> > android::graphics::Interpolator_::Result::values()
{
	return call_static_method<
		android::graphics::Interpolator_::Result::J2CPP_CLASS_NAME,
		android::graphics::Interpolator_::Result::J2CPP_METHOD_NAME(0),
		android::graphics::Interpolator_::Result::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::Interpolator_::Result >, 1> >
	>();
}

local_ref< android::graphics::Interpolator_::Result > android::graphics::Interpolator_::Result::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Interpolator_::Result::J2CPP_CLASS_NAME,
		android::graphics::Interpolator_::Result::J2CPP_METHOD_NAME(1),
		android::graphics::Interpolator_::Result::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Interpolator_::Result >
	>(a0);
}




static_field<
	android::graphics::Interpolator_::Result::J2CPP_CLASS_NAME,
	android::graphics::Interpolator_::Result::J2CPP_FIELD_NAME(0),
	android::graphics::Interpolator_::Result::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Interpolator_::Result >
> android::graphics::Interpolator_::Result::FREEZE_END;

static_field<
	android::graphics::Interpolator_::Result::J2CPP_CLASS_NAME,
	android::graphics::Interpolator_::Result::J2CPP_FIELD_NAME(1),
	android::graphics::Interpolator_::Result::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Interpolator_::Result >
> android::graphics::Interpolator_::Result::FREEZE_START;

static_field<
	android::graphics::Interpolator_::Result::J2CPP_CLASS_NAME,
	android::graphics::Interpolator_::Result::J2CPP_FIELD_NAME(2),
	android::graphics::Interpolator_::Result::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::Interpolator_::Result >
> android::graphics::Interpolator_::Result::NORMAL;


J2CPP_DEFINE_CLASS(android::graphics::Interpolator_::Result,"android/graphics/Interpolator$Result")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator_::Result,0,"values","()[android.graphics.Interpolator.Result")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator_::Result,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Interpolator$Result;")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator_::Result,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator_::Result,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Interpolator_::Result,0,"FREEZE_END","Landroid/graphics/Interpolator$Result;")
J2CPP_DEFINE_FIELD(android::graphics::Interpolator_::Result,1,"FREEZE_START","Landroid/graphics/Interpolator$Result;")
J2CPP_DEFINE_FIELD(android::graphics::Interpolator_::Result,2,"NORMAL","Landroid/graphics/Interpolator$Result;")
J2CPP_DEFINE_FIELD(android::graphics::Interpolator_::Result,3,"$VALUES","[android.graphics.Interpolator.Result")



android::graphics::Interpolator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::Interpolator::Interpolator(jint a0)
: object<android::graphics::Interpolator>(
	call_new_object<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(0),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::graphics::Interpolator::Interpolator(jint a0, jint a1)
: object<android::graphics::Interpolator>(
	call_new_object<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(1),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


void android::graphics::Interpolator::reset(jint a0)
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(2),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::graphics::Interpolator::reset(jint a0, jint a1)
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(3),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

jint android::graphics::Interpolator::getKeyFrameCount()
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(4),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::graphics::Interpolator::getValueCount()
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(5),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

void android::graphics::Interpolator::setKeyFrame(jint a0, jint a1, local_ref< array<jfloat,1> > const &a2)
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(6),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::graphics::Interpolator::setKeyFrame(jint a0, jint a1, local_ref< array<jfloat,1> > const &a2, local_ref< array<jfloat,1> > const &a3)
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(7),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Interpolator::setRepeatMirror(jfloat a0, jboolean a1)
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(8),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< android::graphics::Interpolator_::Result > android::graphics::Interpolator::timeToValues(local_ref< array<jfloat,1> > const &a0)
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(9),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::graphics::Interpolator_::Result >
	>(get_jobject(), a0);
}

local_ref< android::graphics::Interpolator_::Result > android::graphics::Interpolator::timeToValues(jint a0, local_ref< array<jfloat,1> > const &a1)
{
	return call_method<
		android::graphics::Interpolator::J2CPP_CLASS_NAME,
		android::graphics::Interpolator::J2CPP_METHOD_NAME(10),
		android::graphics::Interpolator::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::graphics::Interpolator_::Result >
	>(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(android::graphics::Interpolator,"android/graphics/Interpolator")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,2,"reset","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,3,"reset","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,4,"getKeyFrameCount","()I")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,5,"getValueCount","()I")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,6,"setKeyFrame","(II[F)V")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,7,"setKeyFrame","(II[F[F)V")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,8,"setRepeatMirror","(FZ)V")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,9,"timeToValues","([F)Landroid/graphics/Interpolator$Result;")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,10,"timeToValues","(I[F)Landroid/graphics/Interpolator$Result;")
J2CPP_DEFINE_METHOD(android::graphics::Interpolator,11,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_INTERPOLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
