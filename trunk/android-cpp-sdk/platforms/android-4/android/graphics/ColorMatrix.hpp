/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.ColorMatrix
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_COLORMATRIX_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_COLORMATRIX_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class ColorMatrix;
	class ColorMatrix
		: public object<ColorMatrix>
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

		explicit ColorMatrix(jobject jobj)
		: object<ColorMatrix>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ColorMatrix();
		ColorMatrix(local_ref< array<jfloat,1> > const&);
		ColorMatrix(local_ref< android::graphics::ColorMatrix > const&);
		local_ref< array<jfloat,1> > getArray();
		void reset();
		void set(local_ref< android::graphics::ColorMatrix >  const&);
		void set(local_ref< array<jfloat,1> >  const&);
		void setScale(jfloat, jfloat, jfloat, jfloat);
		void setRotate(jint, jfloat);
		void setConcat(local_ref< android::graphics::ColorMatrix >  const&, local_ref< android::graphics::ColorMatrix >  const&);
		void preConcat(local_ref< android::graphics::ColorMatrix >  const&);
		void postConcat(local_ref< android::graphics::ColorMatrix >  const&);
		void setSaturation(jfloat);
		void setRGB2YUV();
		void setYUV2RGB();
	}; //class ColorMatrix

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_COLORMATRIX_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_COLORMATRIX_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_COLORMATRIX_HPP_IMPL

namespace j2cpp {



android::graphics::ColorMatrix::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::ColorMatrix::ColorMatrix()
: object<android::graphics::ColorMatrix>(
	call_new_object<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(0),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::graphics::ColorMatrix::ColorMatrix(local_ref< array<jfloat,1> > const &a0)
: object<android::graphics::ColorMatrix>(
	call_new_object<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(1),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



android::graphics::ColorMatrix::ColorMatrix(local_ref< android::graphics::ColorMatrix > const &a0)
: object<android::graphics::ColorMatrix>(
	call_new_object<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(2),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


local_ref< array<jfloat,1> > android::graphics::ColorMatrix::getArray()
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(3),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jfloat,1> > >
	(get_jobject());
}

void android::graphics::ColorMatrix::reset()
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(4),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void android::graphics::ColorMatrix::set(local_ref< android::graphics::ColorMatrix > const &a0)
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(5),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void android::graphics::ColorMatrix::set(local_ref< array<jfloat,1> > const &a0)
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(6),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void android::graphics::ColorMatrix::setScale(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(7),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::ColorMatrix::setRotate(jint a0, jfloat a1)
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(8),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::ColorMatrix::setConcat(local_ref< android::graphics::ColorMatrix > const &a0, local_ref< android::graphics::ColorMatrix > const &a1)
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(9),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::ColorMatrix::preConcat(local_ref< android::graphics::ColorMatrix > const &a0)
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(10),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void android::graphics::ColorMatrix::postConcat(local_ref< android::graphics::ColorMatrix > const &a0)
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(11),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void android::graphics::ColorMatrix::setSaturation(jfloat a0)
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(12),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void android::graphics::ColorMatrix::setRGB2YUV()
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(13),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject());
}

void android::graphics::ColorMatrix::setYUV2RGB()
{
	return call_method<
		android::graphics::ColorMatrix::J2CPP_CLASS_NAME,
		android::graphics::ColorMatrix::J2CPP_METHOD_NAME(14),
		android::graphics::ColorMatrix::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::ColorMatrix,"android/graphics/ColorMatrix")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,1,"<init>","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,2,"<init>","(Landroid/graphics/ColorMatrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,3,"getArray","()[F")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,4,"reset","()V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,5,"set","(Landroid/graphics/ColorMatrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,6,"set","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,7,"setScale","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,8,"setRotate","(IF)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,9,"setConcat","(Landroid/graphics/ColorMatrix;Landroid/graphics/ColorMatrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,10,"preConcat","(Landroid/graphics/ColorMatrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,11,"postConcat","(Landroid/graphics/ColorMatrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,12,"setSaturation","(F)V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,13,"setRGB2YUV","()V")
J2CPP_DEFINE_METHOD(android::graphics::ColorMatrix,14,"setYUV2RGB","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_COLORMATRIX_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION