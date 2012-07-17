/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.CipherInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHERINPUTSTREAM_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_CIPHERINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace javax { namespace crypto { class Cipher; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class FilterInputStream; } } }


#include <java/io/Closeable.hpp>
#include <java/io/FilterInputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <javax/crypto/Cipher.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class CipherInputStream;
	class CipherInputStream
		: public object<CipherInputStream>
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

		explicit CipherInputStream(jobject jobj)
		: object<CipherInputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::io::FilterInputStream>() const;


		CipherInputStream(local_ref< java::io::InputStream > const&, local_ref< javax::crypto::Cipher > const&);
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&);
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jlong skip(jlong);
		jint available();
		void close();
		jboolean markSupported();
	}; //class CipherInputStream

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHERINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_CIPHERINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_CIPHERINPUTSTREAM_HPP_IMPL

namespace j2cpp {



javax::crypto::CipherInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::CipherInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

javax::crypto::CipherInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

javax::crypto::CipherInputStream::operator local_ref<java::io::FilterInputStream>() const
{
	return local_ref<java::io::FilterInputStream>(get_jobject());
}


javax::crypto::CipherInputStream::CipherInputStream(local_ref< java::io::InputStream > const &a0, local_ref< javax::crypto::Cipher > const &a1)
: object<javax::crypto::CipherInputStream>(
	call_new_object<
		javax::crypto::CipherInputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherInputStream::J2CPP_METHOD_NAME(0),
		javax::crypto::CipherInputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



jint javax::crypto::CipherInputStream::read()
{
	return call_method<
		javax::crypto::CipherInputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherInputStream::J2CPP_METHOD_NAME(2),
		javax::crypto::CipherInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint javax::crypto::CipherInputStream::read(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		javax::crypto::CipherInputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherInputStream::J2CPP_METHOD_NAME(3),
		javax::crypto::CipherInputStream::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0);
}

jint javax::crypto::CipherInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		javax::crypto::CipherInputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherInputStream::J2CPP_METHOD_NAME(4),
		javax::crypto::CipherInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jlong javax::crypto::CipherInputStream::skip(jlong a0)
{
	return call_method<
		javax::crypto::CipherInputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherInputStream::J2CPP_METHOD_NAME(5),
		javax::crypto::CipherInputStream::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>(get_jobject(), a0);
}

jint javax::crypto::CipherInputStream::available()
{
	return call_method<
		javax::crypto::CipherInputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherInputStream::J2CPP_METHOD_NAME(6),
		javax::crypto::CipherInputStream::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

void javax::crypto::CipherInputStream::close()
{
	return call_method<
		javax::crypto::CipherInputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherInputStream::J2CPP_METHOD_NAME(7),
		javax::crypto::CipherInputStream::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

jboolean javax::crypto::CipherInputStream::markSupported()
{
	return call_method<
		javax::crypto::CipherInputStream::J2CPP_CLASS_NAME,
		javax::crypto::CipherInputStream::J2CPP_METHOD_NAME(8),
		javax::crypto::CipherInputStream::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::crypto::CipherInputStream,"javax/crypto/CipherInputStream")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,0,"<init>","(Ljava/io/InputStream;Ljavax/crypto/Cipher;)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,1,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,2,"read","()I")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,3,"read","([B)I")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,4,"read","([BII)I")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,5,"skip","(J)J")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,6,"available","()I")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,7,"close","()V")
J2CPP_DEFINE_METHOD(javax::crypto::CipherInputStream,8,"markSupported","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_CIPHERINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
