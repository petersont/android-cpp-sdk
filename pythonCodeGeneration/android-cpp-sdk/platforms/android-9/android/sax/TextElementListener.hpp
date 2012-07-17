/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.sax.TextElementListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_TEXTELEMENTLISTENER_HPP_DECL
#define J2CPP_ANDROID_SAX_TEXTELEMENTLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace sax { class StartElementListener; } } }
namespace j2cpp { namespace android { namespace sax { class EndTextElementListener; } } }


#include <android/sax/EndTextElementListener.hpp>
#include <android/sax/StartElementListener.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace sax {

	class TextElementListener;
	class TextElementListener
		: public object<TextElementListener>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit TextElementListener(jobject jobj)
		: object<TextElementListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::sax::StartElementListener>() const;
		operator local_ref<android::sax::EndTextElementListener>() const;

	}; //class TextElementListener

} //namespace sax
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_TEXTELEMENTLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_TEXTELEMENTLISTENER_HPP_IMPL
#define J2CPP_ANDROID_SAX_TEXTELEMENTLISTENER_HPP_IMPL

namespace j2cpp {



android::sax::TextElementListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::sax::TextElementListener::operator local_ref<android::sax::StartElementListener>() const
{
	return local_ref<android::sax::StartElementListener>(get_jobject());
}

android::sax::TextElementListener::operator local_ref<android::sax::EndTextElementListener>() const
{
	return local_ref<android::sax::EndTextElementListener>(get_jobject());
}

J2CPP_DEFINE_CLASS(android::sax::TextElementListener,"android/sax/TextElementListener")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_TEXTELEMENTLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
