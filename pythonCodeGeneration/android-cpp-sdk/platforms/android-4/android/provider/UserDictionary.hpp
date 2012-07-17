/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.provider.UserDictionary
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_USERDICTIONARY_HPP_DECL
#define J2CPP_ANDROID_PROVIDER_USERDICTIONARY_HPP_DECL


namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace provider { class BaseColumns; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/net/Uri.hpp>
#include <android/provider/BaseColumns.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace provider {

	class UserDictionary;
	namespace UserDictionary_ {

		class Words;
		class Words
			: public object<Words>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)
			J2CPP_DECLARE_FIELD(9)
			J2CPP_DECLARE_FIELD(10)

			explicit Words(jobject jobj)
			: object<Words>(jobj)
			{
			}

			operator local_ref<android::provider::BaseColumns>() const;
			operator local_ref<java::lang::Object>() const;


			Words();
			static void addWord(local_ref< android::content::Context >  const&, local_ref< java::lang::String >  const&, jint, jint);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > CONTENT_URI;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > CONTENT_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > CONTENT_ITEM_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > _ID;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > WORD;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > FREQUENCY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > LOCALE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > APP_ID;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > LOCALE_TYPE_ALL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > LOCALE_TYPE_CURRENT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > DEFAULT_SORT_ORDER;
		}; //class Words

	} //namespace UserDictionary_

	class UserDictionary
		: public object<UserDictionary>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef UserDictionary_::Words Words;

		explicit UserDictionary(jobject jobj)
		: object<UserDictionary>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		UserDictionary();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > AUTHORITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::net::Uri > > CONTENT_URI;
	}; //class UserDictionary

} //namespace provider
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_USERDICTIONARY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_USERDICTIONARY_HPP_IMPL
#define J2CPP_ANDROID_PROVIDER_USERDICTIONARY_HPP_IMPL

namespace j2cpp {




android::provider::UserDictionary_::Words::operator local_ref<android::provider::BaseColumns>() const
{
	return local_ref<android::provider::BaseColumns>(get_jobject());
}

android::provider::UserDictionary_::Words::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::provider::UserDictionary_::Words::Words()
: object<android::provider::UserDictionary_::Words>(
	call_new_object<
		android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
		android::provider::UserDictionary_::Words::J2CPP_METHOD_NAME(0),
		android::provider::UserDictionary_::Words::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::provider::UserDictionary_::Words::addWord(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1, jint a2, jint a3)
{
	return call_static_method<
		android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
		android::provider::UserDictionary_::Words::J2CPP_METHOD_NAME(1),
		android::provider::UserDictionary_::Words::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0, a1, a2, a3);
}



static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(0),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::Uri >
> android::provider::UserDictionary_::Words::CONTENT_URI;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(1),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::provider::UserDictionary_::Words::CONTENT_TYPE;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(2),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::provider::UserDictionary_::Words::CONTENT_ITEM_TYPE;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(3),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::provider::UserDictionary_::Words::_ID;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(4),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::provider::UserDictionary_::Words::WORD;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(5),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::provider::UserDictionary_::Words::FREQUENCY;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(6),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::provider::UserDictionary_::Words::LOCALE;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(7),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::provider::UserDictionary_::Words::APP_ID;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(8),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::provider::UserDictionary_::Words::LOCALE_TYPE_ALL;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(9),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::provider::UserDictionary_::Words::LOCALE_TYPE_CURRENT;

static_field<
	android::provider::UserDictionary_::Words::J2CPP_CLASS_NAME,
	android::provider::UserDictionary_::Words::J2CPP_FIELD_NAME(10),
	android::provider::UserDictionary_::Words::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::provider::UserDictionary_::Words::DEFAULT_SORT_ORDER;


J2CPP_DEFINE_CLASS(android::provider::UserDictionary_::Words,"android/provider/UserDictionary$Words")
J2CPP_DEFINE_METHOD(android::provider::UserDictionary_::Words,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::provider::UserDictionary_::Words,1,"addWord","(Landroid/content/Context;Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(android::provider::UserDictionary_::Words,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,0,"CONTENT_URI","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,1,"CONTENT_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,2,"CONTENT_ITEM_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,3,"_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,4,"WORD","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,5,"FREQUENCY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,6,"LOCALE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,7,"APP_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,8,"LOCALE_TYPE_ALL","I")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,9,"LOCALE_TYPE_CURRENT","I")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary_::Words,10,"DEFAULT_SORT_ORDER","Ljava/lang/String;")



android::provider::UserDictionary::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::provider::UserDictionary::UserDictionary()
: object<android::provider::UserDictionary>(
	call_new_object<
		android::provider::UserDictionary::J2CPP_CLASS_NAME,
		android::provider::UserDictionary::J2CPP_METHOD_NAME(0),
		android::provider::UserDictionary::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}




static_field<
	android::provider::UserDictionary::J2CPP_CLASS_NAME,
	android::provider::UserDictionary::J2CPP_FIELD_NAME(0),
	android::provider::UserDictionary::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::provider::UserDictionary::AUTHORITY;

static_field<
	android::provider::UserDictionary::J2CPP_CLASS_NAME,
	android::provider::UserDictionary::J2CPP_FIELD_NAME(1),
	android::provider::UserDictionary::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::net::Uri >
> android::provider::UserDictionary::CONTENT_URI;


J2CPP_DEFINE_CLASS(android::provider::UserDictionary,"android/provider/UserDictionary")
J2CPP_DEFINE_METHOD(android::provider::UserDictionary,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::provider::UserDictionary,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary,0,"AUTHORITY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::UserDictionary,1,"CONTENT_URI","Landroid/net/Uri;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_USERDICTIONARY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
