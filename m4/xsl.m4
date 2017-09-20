AC_DEFUN([AX_CHECK_XSL],
[AC_CACHE_CHECK([for $1 stylesheet], [ax_cv_path_$1_XSL],
[ax_cv_path_$1_XSL=$($XMLCATALOG /etc/xml/catalog "$2")])
AS_IF([test x$ax_cv_path_$1_XSL != x],
[AC_SUBST([$1_XSL], [$ax_cv_path_$1_XSL])])
])
