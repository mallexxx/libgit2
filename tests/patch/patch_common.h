/* An insertion at the beginning of the file and change in the middle */

#define FILE_PREPEND_AND_CHANGE \
	"insert at front\n" \
	"hey!\n" \
	"this is some context!\n" \
	"around some lines\n" \
	"that will change\n" \
	"yes it is!\n" \
	"(THIS line is changed!)\n" \
	"and this\n" \
	"is additional context\n" \
	"below it!\n"

#define PATCH_ORIGINAL_TO_PREPEND_AND_CHANGE \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..f73c8bb 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1,9 +1,10 @@\n" \
	"+insert at front\n" \
	" hey!\n" \
	" this is some context!\n" \
	" around some lines\n" \
	" that will change\n" \
	" yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n" \
	" and this\n" \
	" is additional context\n" \
	" below it!\n"

#define PATCH_ORIGINAL_TO_PREPEND_AND_CHANGE_NOCONTEXT \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..f73c8bb 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -0,0 +1 @@\n" \
	"+insert at front\n" \
	"@@ -6 +7 @@ yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n"

/* A deletion at the beginning of the file and a change in the middle */

#define FILE_DELETE_AND_CHANGE \
	"this is some context!\n" \
	"around some lines\n" \
	"that will change\n" \
	"yes it is!\n" \
	"(THIS line is changed!)\n" \
	"and this\n" \
	"is additional context\n" \
	"below it!\n"

#define PATCH_ORIGINAL_TO_DELETE_AND_CHANGE \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..1e2dfa6 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1,9 +1,8 @@\n" \
	"-hey!\n" \
	" this is some context!\n" \
	" around some lines\n" \
	" that will change\n" \
	" yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n" \
	" and this\n" \
	" is additional context\n" \
	" below it!\n"

#define PATCH_ORIGINAL_TO_DELETE_AND_CHANGE_NOCONTEXT \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..1e2dfa6 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1 +0,0 @@\n" \
	"-hey!\n" \
	"@@ -6 +5 @@ yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n"

/* A deletion at the beginning of the file */

#define FILE_DELETE_FIRSTLINE \
	"this is some context!\n" \
	"around some lines\n" \
	"that will change\n" \
	"yes it is!\n" \
	"(this line is changed)\n" \
	"and this\n" \
	"is additional context\n" \
	"below it!\n"

#define PATCH_ORIGINAL_TO_DELETE_FIRSTLINE \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..f31fa13 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1,4 +1,3 @@\n" \
	"-hey!\n" \
	" this is some context!\n" \
	" around some lines\n" \
	" that will change\n"

#define PATCH_NAME_WHITESPACE \
	"diff --git a/file with spaces.txt b/file with spaces.txt\n" \
	"index 9432026..83759c0 100644\n" \
	"--- a/file with spaces.txt\n" \
	"+++ b/file with spaces.txt\n" \
	"@@ -0,3 +0,2 @@\n" \
	" and this\n" \
	"-is additional context\n" \
	" below it!\n" \


#define PATCH_ORIGINAL_NEW_FILE_WITH_SPACE \
	"diff --git a/sp ace.txt b/sp ace.txt\n" \
	"new file mode 100644\n" \
	"index 000000000..789819226\n" \
	"--- /dev/null\n" \
	"+++ b/sp ace.txt\n" \
	"@@ -0,0 +1 @@\n" \
	"+a\n"