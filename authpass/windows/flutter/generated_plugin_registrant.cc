//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <argon2_ffi/argon2_ffi_plugin.h>
#include <file_selector_windows/file_selector_plugin.h>
#include <url_launcher_windows/url_launcher_windows.h>
#include <winsparkle_flutter/winsparkle_flutter_plugin.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  Argon2FfiPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("Argon2FfiPlugin"));
  FileSelectorPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("FileSelectorPlugin"));
  UrlLauncherWindowsRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("UrlLauncherWindows"));
  WinsparkleFlutterPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("WinsparkleFlutterPlugin"));
}
