/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.AbstractWindowedCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_DECL


namespace j2cpp { namespace android { namespace database { class CrossProcessCursor; } } }
namespace j2cpp { namespace android { namespace database { class CursorWindow; } } }
namespace j2cpp { namespace android { namespace database { class AbstractCursor; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/database/AbstractCursor.hpp>
#include <android/database/CharArrayBuffer.hpp>
#include <android/database/CrossProcessCursor.hpp>
#include <android/database/Cursor.hpp>
#include <android/database/CursorWindow.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class AbstractWindowedCursor;
	class AbstractWindowedCursor
		: public object<AbstractWindowedCursor>
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
		J2CPP_DECLARE_FIELD(0)

		explicit AbstractWindowedCursor(jobject jobj)
		: object<AbstractWindowedCursor>(jobj)
		{
		}

		operator local_ref<android::database::CrossProcessCursor>() const;
		operator local_ref<android::database::AbstractCursor>() const;
		operator local_ref<android::database::Cursor>() const;
		operator local_ref<java::lang::Object>() const;


		AbstractWindowedCursor();
		local_ref< array<jbyte,1> > getBlob(jint);
		local_ref< java::lang::String > getString(jint);
		void copyStringToBuffer(jint, local_ref< android::database::CharArrayBuffer >  const&);
		jshort getShort(jint);
		jint getInt(jint);
		jlong getLong(jint);
		jfloat getFloat(jint);
		jdouble getDouble(jint);
		jboolean isNull(jint);
		jboolean isBlob(jint);
		local_ref< android::database::CursorWindow > getWindow();
		void setWindow(local_ref< android::database::CursorWindow >  const&);
		jboolean hasWindow();

	}; //class AbstractWindowedCursor

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_IMPL

namespace j2cpp {



android::database::AbstractWindowedCursor::operator local_ref<android::database::CrossProcessCursor>() const
{
	return local_ref<android::database::CrossProcessCursor>(get_jobject());
}

android::database::AbstractWindowedCursor::operator local_ref<android::database::AbstractCursor>() const
{
	return local_ref<android::database::AbstractCursor>(get_jobject());
}

android::database::AbstractWindowedCursor::operator local_ref<android::database::Cursor>() const
{
	return local_ref<android::database::Cursor>(get_jobject());
}

android::database::AbstractWindowedCursor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::AbstractWindowedCursor::AbstractWindowedCursor()
: object<android::database::AbstractWindowedCursor>(
	call_new_object<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(0),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< array<jbyte,1> > android::database::AbstractWindowedCursor::getBlob(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(1),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array<jbyte,1> >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::database::AbstractWindowedCursor::getString(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(2),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

void android::database::AbstractWindowedCursor::copyStringToBuffer(jint a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(3),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

jshort android::database::AbstractWindowedCursor::getShort(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(4),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(4), 
		jshort
	>(get_jobject(), a0);
}

jint android::database::AbstractWindowedCursor::getInt(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(5),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

jlong android::database::AbstractWindowedCursor::getLong(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(6),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(6), 
		jlong
	>(get_jobject(), a0);
}

jfloat android::database::AbstractWindowedCursor::getFloat(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(7),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(7), 
		jfloat
	>(get_jobject(), a0);
}

jdouble android::database::AbstractWindowedCursor::getDouble(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(8),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(8), 
		jdouble
	>(get_jobject(), a0);
}

jboolean android::database::AbstractWindowedCursor::isNull(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(9),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::database::AbstractWindowedCursor::isBlob(jint a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(10),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}


local_ref< android::database::CursorWindow > android::database::AbstractWindowedCursor::getWindow()
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(12),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::database::CursorWindow >
	>(get_jobject());
}

void android::database::AbstractWindowedCursor::setWindow(local_ref< android::database::CursorWindow > const &a0)
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(13),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

jboolean android::database::AbstractWindowedCursor::hasWindow()
{
	return call_method<
		android::database::AbstractWindowedCursor::J2CPP_CLASS_NAME,
		android::database::AbstractWindowedCursor::J2CPP_METHOD_NAME(14),
		android::database::AbstractWindowedCursor::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(android::database::AbstractWindowedCursor,"android/database/AbstractWindowedCursor")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,1,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,2,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,3,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,4,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,5,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,6,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,7,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,8,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,9,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,10,"isBlob","(I)Z")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,11,"checkPosition","()V")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,12,"getWindow","()Landroid/database/CursorWindow;")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,13,"setWindow","(Landroid/database/CursorWindow;)V")
J2CPP_DEFINE_METHOD(android::database::AbstractWindowedCursor,14,"hasWindow","()Z")
J2CPP_DEFINE_FIELD(android::database::AbstractWindowedCursor,0,"mWindow","Landroid/database/CursorWindow;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_ABSTRACTWINDOWEDCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
