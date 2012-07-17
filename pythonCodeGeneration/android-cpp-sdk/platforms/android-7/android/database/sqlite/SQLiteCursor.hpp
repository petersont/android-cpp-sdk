/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.sqlite.SQLiteCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSOR_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace database { class AbstractWindowedCursor; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class AbstractCursor; } } }
namespace j2cpp { namespace android { namespace database { class CursorWindow; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteQuery; } } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteDatabase; } } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteCursorDriver; } } } }
namespace j2cpp { namespace android { namespace database { class CrossProcessCursor; } } }


#include <android/database/AbstractCursor.hpp>
#include <android/database/AbstractWindowedCursor.hpp>
#include <android/database/CrossProcessCursor.hpp>
#include <android/database/Cursor.hpp>
#include <android/database/CursorWindow.hpp>
#include <android/database/DataSetObserver.hpp>
#include <android/database/sqlite/SQLiteCursorDriver.hpp>
#include <android/database/sqlite/SQLiteDatabase.hpp>
#include <android/database/sqlite/SQLiteQuery.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteCursor;
	class SQLiteCursor
		: public object<SQLiteCursor>
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

		explicit SQLiteCursor(jobject jobj)
		: object<SQLiteCursor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::database::AbstractWindowedCursor>() const;
		operator local_ref<android::database::Cursor>() const;
		operator local_ref<android::database::AbstractCursor>() const;
		operator local_ref<android::database::CrossProcessCursor>() const;


		SQLiteCursor(local_ref< android::database::sqlite::SQLiteDatabase > const&, local_ref< android::database::sqlite::SQLiteCursorDriver > const&, local_ref< java::lang::String > const&, local_ref< android::database::sqlite::SQLiteQuery > const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		local_ref< android::database::sqlite::SQLiteDatabase > getDatabase();
		jboolean onMove(jint, jint);
		jint getCount();
		jint getColumnIndex(local_ref< java::lang::String >  const&);
		local_ref< array< local_ref< java::lang::String >, 1> > getColumnNames();
		void deactivate();
		void close();
		jboolean requery();
		void setWindow(local_ref< android::database::CursorWindow >  const&);
		void setSelectionArguments(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
	}; //class SQLiteCursor

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSOR_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSOR_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteCursor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::database::sqlite::SQLiteCursor::operator local_ref<android::database::AbstractWindowedCursor>() const
{
	return local_ref<android::database::AbstractWindowedCursor>(get_jobject());
}

android::database::sqlite::SQLiteCursor::operator local_ref<android::database::Cursor>() const
{
	return local_ref<android::database::Cursor>(get_jobject());
}

android::database::sqlite::SQLiteCursor::operator local_ref<android::database::AbstractCursor>() const
{
	return local_ref<android::database::AbstractCursor>(get_jobject());
}

android::database::sqlite::SQLiteCursor::operator local_ref<android::database::CrossProcessCursor>() const
{
	return local_ref<android::database::CrossProcessCursor>(get_jobject());
}


android::database::sqlite::SQLiteCursor::SQLiteCursor(local_ref< android::database::sqlite::SQLiteDatabase > const &a0, local_ref< android::database::sqlite::SQLiteCursorDriver > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::database::sqlite::SQLiteQuery > const &a3)
: object<android::database::sqlite::SQLiteCursor>(
	call_new_object<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(0),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}


void android::database::sqlite::SQLiteCursor::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(1),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

local_ref< android::database::sqlite::SQLiteDatabase > android::database::sqlite::SQLiteCursor::getDatabase()
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(2),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::database::sqlite::SQLiteDatabase >
	>(get_jobject());
}

jboolean android::database::sqlite::SQLiteCursor::onMove(jint a0, jint a1)
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(3),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1);
}

jint android::database::sqlite::SQLiteCursor::getCount()
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(4),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::database::sqlite::SQLiteCursor::getColumnIndex(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(5),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::database::sqlite::SQLiteCursor::getColumnNames()
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(6),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(get_jobject());
}

void android::database::sqlite::SQLiteCursor::deactivate()
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(7),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

void android::database::sqlite::SQLiteCursor::close()
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(8),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

jboolean android::database::sqlite::SQLiteCursor::requery()
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(9),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

void android::database::sqlite::SQLiteCursor::setWindow(local_ref< android::database::CursorWindow > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(10),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void android::database::sqlite::SQLiteCursor::setSelectionArguments(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_method<
		android::database::sqlite::SQLiteCursor::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_NAME(11),
		android::database::sqlite::SQLiteCursor::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteCursor,"android/database/sqlite/SQLiteCursor")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,0,"<init>","(Landroid/database/sqlite/SQLiteDatabase;Landroid/database/sqlite/SQLiteCursorDriver;Ljava/lang/String;Landroid/database/sqlite/SQLiteQuery;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,1,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,2,"getDatabase","()Landroid/database/sqlite/SQLiteDatabase;")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,3,"onMove","(II)Z")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,4,"getCount","()I")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,5,"getColumnIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,6,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,7,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,8,"close","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,9,"requery","()Z")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,10,"setWindow","(Landroid/database/CursorWindow;)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,11,"setSelectionArguments","([java.lang.String)V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteCursor,12,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITECURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
