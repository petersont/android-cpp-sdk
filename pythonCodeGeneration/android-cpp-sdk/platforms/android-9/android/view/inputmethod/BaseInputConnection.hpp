/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.BaseInputConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedTextRequest; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class InputConnection; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedText; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/os/Bundle.hpp>
#include <android/text/Editable.hpp>
#include <android/text/Spannable.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/inputmethod/CompletionInfo.hpp>
#include <android/view/inputmethod/ExtractedText.hpp>
#include <android/view/inputmethod/ExtractedTextRequest.hpp>
#include <android/view/inputmethod/InputConnection.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class BaseInputConnection;
	class BaseInputConnection
		: public object<BaseInputConnection>
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
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)

		explicit BaseInputConnection(jobject jobj)
		: object<BaseInputConnection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::view::inputmethod::InputConnection>() const;


		BaseInputConnection(local_ref< android::view::View > const&, jboolean);
		static void removeComposingSpans(local_ref< android::text::Spannable >  const&);
		static void setComposingSpans(local_ref< android::text::Spannable >  const&);
		static jint getComposingSpanStart(local_ref< android::text::Spannable >  const&);
		static jint getComposingSpanEnd(local_ref< android::text::Spannable >  const&);
		local_ref< android::text::Editable > getEditable();
		jboolean beginBatchEdit();
		jboolean endBatchEdit();
		jboolean clearMetaKeyStates(jint);
		jboolean commitCompletion(local_ref< android::view::inputmethod::CompletionInfo >  const&);
		jboolean commitText(local_ref< java::lang::CharSequence >  const&, jint);
		jboolean deleteSurroundingText(jint, jint);
		jboolean finishComposingText();
		jint getCursorCapsMode(jint);
		local_ref< android::view::inputmethod::ExtractedText > getExtractedText(local_ref< android::view::inputmethod::ExtractedTextRequest >  const&, jint);
		local_ref< java::lang::CharSequence > getTextBeforeCursor(jint, jint);
		local_ref< java::lang::CharSequence > getSelectedText(jint);
		local_ref< java::lang::CharSequence > getTextAfterCursor(jint, jint);
		jboolean performEditorAction(jint);
		jboolean performContextMenuAction(jint);
		jboolean performPrivateCommand(local_ref< java::lang::String >  const&, local_ref< android::os::Bundle >  const&);
		jboolean setComposingText(local_ref< java::lang::CharSequence >  const&, jint);
		jboolean setComposingRegion(jint, jint);
		jboolean setSelection(jint, jint);
		jboolean sendKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean reportFullscreenMode(jboolean);
	}; //class BaseInputConnection

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::BaseInputConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::inputmethod::BaseInputConnection::operator local_ref<android::view::inputmethod::InputConnection>() const
{
	return local_ref<android::view::inputmethod::InputConnection>(get_jobject());
}


android::view::inputmethod::BaseInputConnection::BaseInputConnection(local_ref< android::view::View > const &a0, jboolean a1)
: object<android::view::inputmethod::BaseInputConnection>(
	call_new_object<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


void android::view::inputmethod::BaseInputConnection::removeComposingSpans(local_ref< android::text::Spannable > const &a0)
{
	return call_static_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0);
}

void android::view::inputmethod::BaseInputConnection::setComposingSpans(local_ref< android::text::Spannable > const &a0)
{
	return call_static_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0);
}

jint android::view::inputmethod::BaseInputConnection::getComposingSpanStart(local_ref< android::text::Spannable > const &a0)
{
	return call_static_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(3),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(a0);
}

jint android::view::inputmethod::BaseInputConnection::getComposingSpanEnd(local_ref< android::text::Spannable > const &a0)
{
	return call_static_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(4),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(a0);
}

local_ref< android::text::Editable > android::view::inputmethod::BaseInputConnection::getEditable()
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(5),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::text::Editable >
	>(get_jobject());
}

jboolean android::view::inputmethod::BaseInputConnection::beginBatchEdit()
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(6),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

jboolean android::view::inputmethod::BaseInputConnection::endBatchEdit()
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(7),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

jboolean android::view::inputmethod::BaseInputConnection::clearMetaKeyStates(jint a0)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(8),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::BaseInputConnection::commitCompletion(local_ref< android::view::inputmethod::CompletionInfo > const &a0)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(9),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::BaseInputConnection::commitText(local_ref< java::lang::CharSequence > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(10),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::BaseInputConnection::deleteSurroundingText(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(11),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::BaseInputConnection::finishComposingText()
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(12),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject());
}

jint android::view::inputmethod::BaseInputConnection::getCursorCapsMode(jint a0)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(13),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>(get_jobject(), a0);
}

local_ref< android::view::inputmethod::ExtractedText > android::view::inputmethod::BaseInputConnection::getExtractedText(local_ref< android::view::inputmethod::ExtractedTextRequest > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(14),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::view::inputmethod::ExtractedText >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::BaseInputConnection::getTextBeforeCursor(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(15),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::BaseInputConnection::getSelectedText(jint a0)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(16),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::view::inputmethod::BaseInputConnection::getTextAfterCursor(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(17),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::BaseInputConnection::performEditorAction(jint a0)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(18),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(18), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::BaseInputConnection::performContextMenuAction(jint a0)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(19),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(19), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::BaseInputConnection::performPrivateCommand(local_ref< java::lang::String > const &a0, local_ref< android::os::Bundle > const &a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(20),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::BaseInputConnection::setComposingText(local_ref< java::lang::CharSequence > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(21),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(21), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::BaseInputConnection::setComposingRegion(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(22),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::BaseInputConnection::setSelection(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(23),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::view::inputmethod::BaseInputConnection::sendKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(24),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::view::inputmethod::BaseInputConnection::reportFullscreenMode(jboolean a0)
{
	return call_method<
		android::view::inputmethod::BaseInputConnection::J2CPP_CLASS_NAME,
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_NAME(25),
		android::view::inputmethod::BaseInputConnection::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::inputmethod::BaseInputConnection,"android/view/inputmethod/BaseInputConnection")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,0,"<init>","(Landroid/view/View;Z)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,1,"removeComposingSpans","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,2,"setComposingSpans","(Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,3,"getComposingSpanStart","(Landroid/text/Spannable;)I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,4,"getComposingSpanEnd","(Landroid/text/Spannable;)I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,5,"getEditable","()Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,6,"beginBatchEdit","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,7,"endBatchEdit","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,8,"clearMetaKeyStates","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,9,"commitCompletion","(Landroid/view/inputmethod/CompletionInfo;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,10,"commitText","(Ljava/lang/CharSequence;I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,11,"deleteSurroundingText","(II)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,12,"finishComposingText","()Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,13,"getCursorCapsMode","(I)I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,14,"getExtractedText","(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,15,"getTextBeforeCursor","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,16,"getSelectedText","(I)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,17,"getTextAfterCursor","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,18,"performEditorAction","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,19,"performContextMenuAction","(I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,20,"performPrivateCommand","(Ljava/lang/String;Landroid/os/Bundle;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,21,"setComposingText","(Ljava/lang/CharSequence;I)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,22,"setComposingRegion","(II)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,23,"setSelection","(II)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,24,"sendKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::inputmethod::BaseInputConnection,25,"reportFullscreenMode","(Z)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_BASEINPUTCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
