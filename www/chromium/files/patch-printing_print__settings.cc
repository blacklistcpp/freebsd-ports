--- printing/print_settings.cc.orig	2021-01-18 21:29:02 UTC
+++ printing/print_settings.cc
@@ -278,9 +278,9 @@ void PrintSettings::Clear() {
 #endif
   is_modifiable_ = true;
   pages_per_sheet_ = 1;
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   advanced_settings_.clear();
-#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 #if BUILDFLAG(IS_ASH)
   send_user_info_ = false;
   username_.clear();
