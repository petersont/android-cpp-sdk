/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.ConsoleMessage
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_CONSOLEMESSAGE_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_CONSOLEMESSAGE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace android { namespace webkit { namespace ConsoleMessage_ { class MessageLevel; } } } }


#include <android/webkit/ConsoleMessage.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class ConsoleMessage;
	namespace ConsoleMessage_ {

		class MessageLevel;
		class MessageLevel
			: public object<MessageLevel>
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
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)

			explicit MessageLevel(jobject jobj)
			: object<MessageLevel>(jobj)
			{
			}

			operator local_ref<java::lang::Comparable>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::io::Serializable>() const;


			static local_ref< array< local_ref< android::webkit::ConsoleMessage_::MessageLevel >, 1> > values();
			static local_ref< android::webkit::ConsoleMessage_::MessageLevel > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::webkit::ConsoleMessage_::MessageLevel > > DEBUG;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::webkit::ConsoleMessage_::MessageLevel > > ERROR;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::webkit::ConsoleMessage_::MessageLevel > > LOG;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::webkit::ConsoleMessage_::MessageLevel > > TIP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::webkit::ConsoleMessage_::MessageLevel > > WARNING;
		}; //class MessageLevel

	} //namespace ConsoleMessage_

	class ConsoleMessage
		: public object<ConsoleMessage>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		typedef ConsoleMessage_::MessageLevel MessageLevel;

		explicit ConsoleMessage(jobject jobj)
		: object<ConsoleMessage>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ConsoleMessage(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint, local_ref< android::webkit::ConsoleMessage_::MessageLevel > const&);
		local_ref< android::webkit::ConsoleMessage_::MessageLevel > messageLevel();
		local_ref< java::lang::String > message();
		local_ref< java::lang::String > sourceId();
		jint lineNumber();
	}; //class ConsoleMessage

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_CONSOLEMESSAGE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_CONSOLEMESSAGE_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_CONSOLEMESSAGE_HPP_IMPL

namespace j2cpp {




android::webkit::ConsoleMessage_::MessageLevel::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::webkit::ConsoleMessage_::MessageLevel::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::webkit::ConsoleMessage_::MessageLevel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::webkit::ConsoleMessage_::MessageLevel::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< array< local_ref< android::webkit::ConsoleMessage_::MessageLevel >, 1> > android::webkit::ConsoleMessage_::MessageLevel::values()
{
	return call_static_method<
		android::webkit::ConsoleMessage_::MessageLevel::J2CPP_CLASS_NAME,
		android::webkit::ConsoleMessage_::MessageLevel::J2CPP_METHOD_NAME(0),
		android::webkit::ConsoleMessage_::MessageLevel::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::webkit::ConsoleMessage_::MessageLevel >, 1> >
	>();
}

local_ref< android::webkit::ConsoleMessage_::MessageLevel > android::webkit::ConsoleMessage_::MessageLevel::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::webkit::ConsoleMessage_::MessageLevel::J2CPP_CLASS_NAME,
		android::webkit::ConsoleMessage_::MessageLevel::J2CPP_METHOD_NAME(1),
		android::webkit::ConsoleMessage_::MessageLevel::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::webkit::ConsoleMessage_::MessageLevel >
	>(a0);
}




static_field<
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_CLASS_NAME,
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_NAME(0),
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::webkit::ConsoleMessage_::MessageLevel >
> android::webkit::ConsoleMessage_::MessageLevel::DEBUG;

static_field<
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_CLASS_NAME,
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_NAME(1),
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::webkit::ConsoleMessage_::MessageLevel >
> android::webkit::ConsoleMessage_::MessageLevel::ERROR;

static_field<
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_CLASS_NAME,
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_NAME(2),
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::webkit::ConsoleMessage_::MessageLevel >
> android::webkit::ConsoleMessage_::MessageLevel::LOG;

static_field<
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_CLASS_NAME,
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_NAME(3),
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::webkit::ConsoleMessage_::MessageLevel >
> android::webkit::ConsoleMessage_::MessageLevel::TIP;

static_field<
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_CLASS_NAME,
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_NAME(4),
	android::webkit::ConsoleMessage_::MessageLevel::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::webkit::ConsoleMessage_::MessageLevel >
> android::webkit::ConsoleMessage_::MessageLevel::WARNING;


J2CPP_DEFINE_CLASS(android::webkit::ConsoleMessage_::MessageLevel,"android/webkit/ConsoleMessage$MessageLevel")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage_::MessageLevel,0,"values","()[android.webkit.ConsoleMessage.MessageLevel")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage_::MessageLevel,1,"valueOf","(Ljava/lang/String;)Landroid/webkit/ConsoleMessage$MessageLevel;")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage_::MessageLevel,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage_::MessageLevel,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::webkit::ConsoleMessage_::MessageLevel,0,"DEBUG","Landroid/webkit/ConsoleMessage$MessageLevel;")
J2CPP_DEFINE_FIELD(android::webkit::ConsoleMessage_::MessageLevel,1,"ERROR","Landroid/webkit/ConsoleMessage$MessageLevel;")
J2CPP_DEFINE_FIELD(android::webkit::ConsoleMessage_::MessageLevel,2,"LOG","Landroid/webkit/ConsoleMessage$MessageLevel;")
J2CPP_DEFINE_FIELD(android::webkit::ConsoleMessage_::MessageLevel,3,"TIP","Landroid/webkit/ConsoleMessage$MessageLevel;")
J2CPP_DEFINE_FIELD(android::webkit::ConsoleMessage_::MessageLevel,4,"WARNING","Landroid/webkit/ConsoleMessage$MessageLevel;")
J2CPP_DEFINE_FIELD(android::webkit::ConsoleMessage_::MessageLevel,5,"$VALUES","[android.webkit.ConsoleMessage.MessageLevel")



android::webkit::ConsoleMessage::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::webkit::ConsoleMessage::ConsoleMessage(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2, local_ref< android::webkit::ConsoleMessage_::MessageLevel > const &a3)
: object<android::webkit::ConsoleMessage>(
	call_new_object<
		android::webkit::ConsoleMessage::J2CPP_CLASS_NAME,
		android::webkit::ConsoleMessage::J2CPP_METHOD_NAME(0),
		android::webkit::ConsoleMessage::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}


local_ref< android::webkit::ConsoleMessage_::MessageLevel > android::webkit::ConsoleMessage::messageLevel()
{
	return call_method<
		android::webkit::ConsoleMessage::J2CPP_CLASS_NAME,
		android::webkit::ConsoleMessage::J2CPP_METHOD_NAME(1),
		android::webkit::ConsoleMessage::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::webkit::ConsoleMessage_::MessageLevel >
	>(get_jobject());
}

local_ref< java::lang::String > android::webkit::ConsoleMessage::message()
{
	return call_method<
		android::webkit::ConsoleMessage::J2CPP_CLASS_NAME,
		android::webkit::ConsoleMessage::J2CPP_METHOD_NAME(2),
		android::webkit::ConsoleMessage::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::webkit::ConsoleMessage::sourceId()
{
	return call_method<
		android::webkit::ConsoleMessage::J2CPP_CLASS_NAME,
		android::webkit::ConsoleMessage::J2CPP_METHOD_NAME(3),
		android::webkit::ConsoleMessage::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::webkit::ConsoleMessage::lineNumber()
{
	return call_method<
		android::webkit::ConsoleMessage::J2CPP_CLASS_NAME,
		android::webkit::ConsoleMessage::J2CPP_METHOD_NAME(4),
		android::webkit::ConsoleMessage::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::webkit::ConsoleMessage,"android/webkit/ConsoleMessage")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage,0,"<init>","(Ljava/lang/String;Ljava/lang/String;ILandroid/webkit/ConsoleMessage$MessageLevel;)V")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage,1,"messageLevel","()Landroid/webkit/ConsoleMessage$MessageLevel;")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage,2,"message","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage,3,"sourceId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::ConsoleMessage,4,"lineNumber","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_CONSOLEMESSAGE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
