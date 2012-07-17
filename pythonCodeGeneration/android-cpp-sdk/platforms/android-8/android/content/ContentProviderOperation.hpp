/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.ContentProviderOperation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_HPP_DECL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class ContentProvider; } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderResult; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace content { namespace ContentProviderOperation_ { class Builder; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ContentProvider.hpp>
#include <android/content/ContentProviderOperation.hpp>
#include <android/content/ContentProviderResult.hpp>
#include <android/content/ContentValues.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ContentProviderOperation;
	namespace ContentProviderOperation_ {

		class Builder;
		class Builder
			: public object<Builder>
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

			explicit Builder(jobject jobj)
			: object<Builder>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< android::content::ContentProviderOperation > build();
			local_ref< android::content::ContentProviderOperation_::Builder > withValueBackReferences(local_ref< android::content::ContentValues >  const&);
			local_ref< android::content::ContentProviderOperation_::Builder > withValueBackReference(local_ref< java::lang::String >  const&, jint);
			local_ref< android::content::ContentProviderOperation_::Builder > withSelectionBackReference(jint, jint);
			local_ref< android::content::ContentProviderOperation_::Builder > withValues(local_ref< android::content::ContentValues >  const&);
			local_ref< android::content::ContentProviderOperation_::Builder > withValue(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
			local_ref< android::content::ContentProviderOperation_::Builder > withSelection(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
			local_ref< android::content::ContentProviderOperation_::Builder > withExpectedCount(jint);
			local_ref< android::content::ContentProviderOperation_::Builder > withYieldAllowed(jboolean);
		}; //class Builder

	} //namespace ContentProviderOperation_

	class ContentProviderOperation
		: public object<ContentProviderOperation>
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
		J2CPP_DECLARE_FIELD(0)

		typedef ContentProviderOperation_::Builder Builder;

		explicit ContentProviderOperation(jobject jobj)
		: object<ContentProviderOperation>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<java::lang::Object>() const;


		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		static local_ref< android::content::ContentProviderOperation_::Builder > newInsert(local_ref< android::net::Uri >  const&);
		static local_ref< android::content::ContentProviderOperation_::Builder > newUpdate(local_ref< android::net::Uri >  const&);
		static local_ref< android::content::ContentProviderOperation_::Builder > newDelete(local_ref< android::net::Uri >  const&);
		static local_ref< android::content::ContentProviderOperation_::Builder > newAssertQuery(local_ref< android::net::Uri >  const&);
		local_ref< android::net::Uri > getUri();
		jboolean isYieldAllowed();
		jboolean isWriteOperation();
		jboolean isReadOperation();
		local_ref< android::content::ContentProviderResult > apply(local_ref< android::content::ContentProvider >  const&, local_ref< array< local_ref< android::content::ContentProviderResult >, 1> >  const&, jint);
		local_ref< android::content::ContentValues > resolveValueBackReferences(local_ref< array< local_ref< android::content::ContentProviderResult >, 1> >  const&, jint);
		local_ref< array< local_ref< java::lang::String >, 1> > resolveSelectionArgsBackReferences(local_ref< array< local_ref< android::content::ContentProviderResult >, 1> >  const&, jint);
		local_ref< java::lang::String > toString();
		jint describeContents();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ContentProviderOperation

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_HPP_IMPL

namespace j2cpp {




android::content::ContentProviderOperation_::Builder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::content::ContentProviderOperation > android::content::ContentProviderOperation_::Builder::build()
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(1),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::content::ContentProviderOperation >
	>(get_jobject());
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation_::Builder::withValueBackReferences(local_ref< android::content::ContentValues > const &a0)
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(2),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(get_jobject(), a0);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation_::Builder::withValueBackReference(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(3),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(get_jobject(), a0, a1);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation_::Builder::withSelectionBackReference(jint a0, jint a1)
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(4),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(get_jobject(), a0, a1);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation_::Builder::withValues(local_ref< android::content::ContentValues > const &a0)
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(5),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(get_jobject(), a0);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation_::Builder::withValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(6),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(get_jobject(), a0, a1);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation_::Builder::withSelection(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(7),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(get_jobject(), a0, a1);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation_::Builder::withExpectedCount(jint a0)
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(8),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(get_jobject(), a0);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation_::Builder::withYieldAllowed(jboolean a0)
{
	return call_method<
		android::content::ContentProviderOperation_::Builder::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_NAME(9),
		android::content::ContentProviderOperation_::Builder::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::content::ContentProviderOperation_::Builder,"android/content/ContentProviderOperation$Builder")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,1,"build","()Landroid/content/ContentProviderOperation;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,2,"withValueBackReferences","(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,3,"withValueBackReference","(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,4,"withSelectionBackReference","(II)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,5,"withValues","(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,6,"withValue","(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,7,"withSelection","(Ljava/lang/String;[java.lang.String)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,8,"withExpectedCount","(I)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation_::Builder,9,"withYieldAllowed","(Z)Landroid/content/ContentProviderOperation$Builder;")



android::content::ContentProviderOperation::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::content::ContentProviderOperation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::content::ContentProviderOperation::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(1),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation::newInsert(local_ref< android::net::Uri > const &a0)
{
	return call_static_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(2),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(a0);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation::newUpdate(local_ref< android::net::Uri > const &a0)
{
	return call_static_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(3),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(a0);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation::newDelete(local_ref< android::net::Uri > const &a0)
{
	return call_static_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(4),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(a0);
}

local_ref< android::content::ContentProviderOperation_::Builder > android::content::ContentProviderOperation::newAssertQuery(local_ref< android::net::Uri > const &a0)
{
	return call_static_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(5),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::content::ContentProviderOperation_::Builder >
	>(a0);
}

local_ref< android::net::Uri > android::content::ContentProviderOperation::getUri()
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(6),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::net::Uri >
	>(get_jobject());
}

jboolean android::content::ContentProviderOperation::isYieldAllowed()
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(7),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

jboolean android::content::ContentProviderOperation::isWriteOperation()
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(8),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

jboolean android::content::ContentProviderOperation::isReadOperation()
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(9),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

local_ref< android::content::ContentProviderResult > android::content::ContentProviderOperation::apply(local_ref< android::content::ContentProvider > const &a0, local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > const &a1, jint a2)
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(10),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::content::ContentProviderResult >
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::content::ContentValues > android::content::ContentProviderOperation::resolveValueBackReferences(local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > const &a0, jint a1)
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(11),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::content::ContentValues >
	>(get_jobject(), a0, a1);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::content::ContentProviderOperation::resolveSelectionArgsBackReferences(local_ref< array< local_ref< android::content::ContentProviderResult >, 1> > const &a0, jint a1)
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(12),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::content::ContentProviderOperation::toString()
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(13),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::content::ContentProviderOperation::describeContents()
{
	return call_method<
		android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
		android::content::ContentProviderOperation::J2CPP_METHOD_NAME(14),
		android::content::ContentProviderOperation::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject());
}



static_field<
	android::content::ContentProviderOperation::J2CPP_CLASS_NAME,
	android::content::ContentProviderOperation::J2CPP_FIELD_NAME(0),
	android::content::ContentProviderOperation::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::content::ContentProviderOperation::CREATOR;


J2CPP_DEFINE_CLASS(android::content::ContentProviderOperation,"android/content/ContentProviderOperation")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,1,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,2,"newInsert","(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,3,"newUpdate","(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,4,"newDelete","(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,5,"newAssertQuery","(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,6,"getUri","()Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,7,"isYieldAllowed","()Z")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,8,"isWriteOperation","()Z")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,9,"isReadOperation","()Z")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,10,"apply","(Landroid/content/ContentProvider;[android.content.ContentProviderResultI)Landroid/content/ContentProviderResult;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,11,"resolveValueBackReferences","([android.content.ContentProviderResultI)Landroid/content/ContentValues;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,12,"resolveSelectionArgsBackReferences","([android.content.ContentProviderResultI)[java.lang.String")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,13,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,14,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::ContentProviderOperation,15,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::ContentProviderOperation,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
