/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.sax.StartElementListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_DECL
#define J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { class Attributes; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/xml/sax/Attributes.hpp>


namespace j2cpp {

namespace android { namespace sax {

	class StartElementListener;
	class StartElementListener
		: public object<StartElementListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit StartElementListener(jobject jobj)
		: object<StartElementListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void start(local_ref< org::xml::sax::Attributes >  const&);
	}; //class StartElementListener

} //namespace sax
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_IMPL
#define J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_IMPL

namespace j2cpp {



android::sax::StartElementListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::sax::StartElementListener::start(local_ref< org::xml::sax::Attributes > const &a0)
{
	return call_method<
		android::sax::StartElementListener::J2CPP_CLASS_NAME,
		android::sax::StartElementListener::J2CPP_METHOD_NAME(0),
		android::sax::StartElementListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::sax::StartElementListener,"android/sax/StartElementListener")
J2CPP_DEFINE_METHOD(android::sax::StartElementListener,0,"start","(Lorg/xml/sax/Attributes;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
