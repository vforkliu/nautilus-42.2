resources = gnome.compile_resources(
  'nautilus-resources',
  join_paths(
    'resources', 'nautilus.gresource.xml'
  ),
  source_dir: 'resources',
  c_name: 'nautilus',
  extra_args: '--manual-register'
)

libnautilus_sources = [
  gnome.mkenums(
    'nautilus-enum-types',
    c_template: 'nautilus-enum-types.c.template',
    h_template: 'nautilus-enum-types.h.template',
    sources: [
      'nautilus-enums.h',
      'nautilus-search-popover.h',
      'nautilus-special-location-bar.h',
      'nautilus-query.h',
      'nautilus-search-provider.h'
    ]
  ),
  resources,
  gnome.gdbus_codegen(
    'nautilus-freedesktop-generated',
    join_paths(
      meson.source_root(), 'data', 'freedesktop-dbus-interfaces.xml'
    ),
    interface_prefix: 'org.freedesktop',
    namespace: 'NautilusFreedesktop'
  ),
  gnome.gdbus_codegen(
    'nautilus-generated',
    join_paths(
      meson.source_root(), 'data', 'dbus-interfaces.xml'
    ),
    interface_prefix: 'org.gnome.Nautilus',
    namespace: 'NautilusDBus'
  ),
  gnome.gdbus_codegen(
    'nautilus-generated2',
    join_paths(
      meson.source_root(), 'data', 'dbus-interfaces2.xml'
    ),
    interface_prefix: 'org.gnome.Nautilus',
    namespace: 'NautilusDBus'
  ),
  gnome.gdbus_codegen(
    'nautilus-shell-search-provider-generated',
    join_paths(
      meson.source_root(), 'data', 'shell-search-provider-dbus-interfaces.xml'
    ),
    interface_prefix: 'org.gnome',
    namespace: 'Nautilus'
  ),
  'animation/egg-animation.c',
  'animation/egg-animation.h',
  'animation/egg-frame-source.c',
  'animation/egg-frame-source.h',
  'animation/ide-box-theatric.c',
  'animation/ide-box-theatric.h',
  'animation/ide-cairo.c',
  'animation/ide-cairo.h',
  'gtk/nautilusgtkplacesview.c',
  'gtk/nautilusgtkplacesviewprivate.h',
  'gtk/nautilusgtkplacesviewrow.c',
  'gtk/nautilusgtkplacesviewrowprivate.h',
  'nautilus-gtk4-helpers.c',
  'nautilus-gtk4-helpers.h',
  'nautilus-application.c',
  'nautilus-application.h',
  'nautilus-bookmark-list.c',
  'nautilus-bookmark-list.h',
  'nautilus-canvas-view.c',
  'nautilus-canvas-view.h',
  'nautilus-canvas-view-container.c',
  'nautilus-canvas-view-container.h',
  'nautilus-dbus-manager.c',
  'nautilus-dbus-manager.h',
  'nautilus-error-reporting.c',
  'nautilus-error-reporting.h',
  'nautilus-preferences-window.c',
  'nautilus-preferences-window.h',
  'nautilus-files-view.c',
  'nautilus-files-view.h',
  'nautilus-files-view-dnd.c',
  'nautilus-files-view-dnd.h',
  'nautilus-floating-bar.c',
  'nautilus-floating-bar.h',
  'nautilus-freedesktop-dbus.c',
  'nautilus-freedesktop-dbus.h',
  'nautilus-list-model.c',
  'nautilus-list-model.h',
  'nautilus-list-view.c',
  'nautilus-list-view.h',
  'nautilus-list-view-private.h',
  'nautilus-list-view-dnd.c',
  'nautilus-list-view-dnd.h',
  'nautilus-location-entry.c',
  'nautilus-location-entry.h',
  'nautilus-mime-actions.c',
  'nautilus-mime-actions.h',
  'nautilus-notebook.c',
  'nautilus-notebook.h',
  'nautilus-pathbar.c',
  'nautilus-pathbar.h',
  'nautilus-places-view.c',
  'nautilus-places-view.h',
  'nautilus-previewer.c',
  'nautilus-previewer.h',
  'nautilus-progress-info-widget.c',
  'nautilus-progress-info-widget.h',
  'nautilus-progress-persistence-handler.c',
  'nautilus-progress-persistence-handler.h',
  'nautilus-properties-window.c',
  'nautilus-properties-window.h',
  'nautilus-query-editor.c',
  'nautilus-query-editor.h',
  'nautilus-search-popover.c',
  'nautilus-self-check-functions.c',
  'nautilus-self-check-functions.h',
  'nautilus-shell-search-provider.c',
  'nautilus-special-location-bar.c',
  'nautilus-toolbar.c',
  'nautilus-toolbar.h',
  'nautilus-toolbar-menu-sections.h',
  'nautilus-trash-bar.c',
  'nautilus-trash-bar.h',
  'nautilus-view.c',
  'nautilus-view.h',
  'nautilus-view-icon-controller.c',
  'nautilus-view-icon-controller.h',
  'nautilus-view-icon-item-ui.c',
  'nautilus-view-icon-item-ui.h',
  'nautilus-view-item-model.c',
  'nautilus-view-item-model.h',
  'nautilus-view-model.c',
  'nautilus-view-model.h',
  'nautilus-window-slot.c',
  'nautilus-window-slot.h',
  'nautilus-window-slot-dnd.c',
  'nautilus-window-slot-dnd.h',
  'nautilus-window.c',
  'nautilus-window.h',
  'nautilus-x-content-bar.c',
  'nautilus-x-content-bar.h',
  'nautilus-bookmark.c',
  'nautilus-bookmark.h',
  'nautilus-canvas-container.c',
  'nautilus-canvas-container.h',
  'nautilus-canvas-dnd.c',
  'nautilus-canvas-dnd.h',
  'nautilus-canvas-item.c',
  'nautilus-canvas-item.h',
  'nautilus-canvas-private.h',
  'nautilus-clipboard.c',
  'nautilus-clipboard.h',
  'nautilus-column-chooser.c',
  'nautilus-column-chooser.h',
  'nautilus-column-utilities.c',
  'nautilus-column-utilities.h',
  'nautilus-debug.c',
  'nautilus-debug.h',
  'nautilus-directory-async.c',
  'nautilus-directory-notify.h',
  'nautilus-directory-private.h',
  'nautilus-directory.c',
  'nautilus-directory.h',
  'nautilus-dnd.c',
  'nautilus-dnd.h',
  'nautilus-file-changes-queue.c',
  'nautilus-file-changes-queue.h',
  'nautilus-file-conflict-dialog.c',
  'nautilus-file-conflict-dialog.h',
  'nautilus-file-name-widget-controller.c',
  'nautilus-file-name-widget-controller.h',
  'nautilus-rename-file-popover-controller.c',
  'nautilus-rename-file-popover-controller.h',
  'nautilus-new-folder-dialog-controller.c',
  'nautilus-new-folder-dialog-controller.h',
  'nautilus-compress-dialog-controller.c',
  'nautilus-compress-dialog-controller.h',
  'nautilus-operations-ui-manager.c',
  'nautilus-operations-ui-manager.h',
  'nautilus-file-operations.c',
  'nautilus-file-operations.h',
  'nautilus-file-operations-dbus-data.c',
  'nautilus-file-operations-dbus-data.h',
  'nautilus-file-private.h',
  'nautilus-file-queue.c',
  'nautilus-file-queue.h',
  'nautilus-file-utilities.c',
  'nautilus-file-utilities.h',
  'nautilus-file.c',
  'nautilus-file.h',
  'nautilus-global-preferences.c',
  'nautilus-global-preferences.h',
  'nautilus-icon-info.c',
  'nautilus-icon-info.h',
  'nautilus-icon-names.h',
  'nautilus-keyfile-metadata.c',
  'nautilus-keyfile-metadata.h',
  'nautilus-lib-self-check-functions.c',
  'nautilus-lib-self-check-functions.h',
  'nautilus-metadata.h',
  'nautilus-metadata.c',
  'nautilus-module.c',
  'nautilus-module.h',
  'nautilus-monitor.c',
  'nautilus-monitor.h',
  'nautilus-profile.c',
  'nautilus-profile.h',
  'nautilus-progress-info.c',
  'nautilus-progress-info.h',
  'nautilus-progress-info-manager.c',
  'nautilus-progress-info-manager.h',
  'nautilus-program-choosing.c',
  'nautilus-program-choosing.h',
  'nautilus-search-directory.c',
  'nautilus-search-directory.h',
  'nautilus-search-directory-file.c',
  'nautilus-search-directory-file.h',
  'nautilus-search-provider.c',
  'nautilus-search-provider.h',
  'nautilus-search-engine.c',
  'nautilus-search-engine.h',
  'nautilus-search-engine-private.h',
  'nautilus-search-engine-model.c',
  'nautilus-search-engine-model.h',
  'nautilus-search-engine-recent.c',
  'nautilus-search-engine-recent.h',
  'nautilus-search-engine-simple.c',
  'nautilus-search-engine-simple.h',
  'nautilus-search-hit.c',
  'nautilus-search-hit.h',
  'nautilus-selection-canvas-item.c',
  'nautilus-selection-canvas-item.h',
  'nautilus-signaller.h',
  'nautilus-signaller.c',
  'nautilus-query.c',
  'nautilus-thumbnails.c',
  'nautilus-thumbnails.h',
  'nautilus-trash-monitor.c',
  'nautilus-trash-monitor.h',
  'nautilus-tree-view-drag-dest.c',
  'nautilus-tree-view-drag-dest.h',
  'nautilus-ui-utilities.c',
  'nautilus-ui-utilities.h',
  'nautilus-video-mime-types.h',
  'nautilus-vfs-directory.c',
  'nautilus-vfs-directory.h',
  'nautilus-vfs-file.c',
  'nautilus-vfs-file.h',
  'nautilus-file-undo-operations.c',
  'nautilus-file-undo-operations.h',
  'nautilus-file-undo-manager.c',
  'nautilus-file-undo-manager.h',
  'nautilus-batch-rename-dialog.c',
  'nautilus-batch-rename-dialog.h',
  'nautilus-batch-rename-utilities.c',
  'nautilus-batch-rename-utilities.h',
  'nautilus-search-engine-tracker.c',
  'nautilus-search-engine-tracker.h',
  'nautilus-tag-manager.c',
  'nautilus-tag-manager.h',
  'nautilus-starred-directory.c',
  'nautilus-starred-directory.h',
  'nautilus-enums.h',
  'nautilus-types.h',
  'nautilus-tracker-utilities.c',
  'nautilus-tracker-utilities.h'
]

nautilus_deps = [
  config_h,
  eel_2,
  gio_unix,
  gmodule,
  gnome_autoar,
  gnome_desktop,
  libgd_dep,
  libhandy,
  libportal,
  libportal_gtk3,
  nautilus_extension,
  selinux,
  tracker_sparql,
  xml
]

libnautilus = static_library(
  'nautilus',
  libnautilus_sources,
  dependencies: nautilus_deps,
  include_directories: nautilus_include_dirs
)

libnautilus_include_dirs = include_directories('.')

libnautilus_dep = declare_dependency(
  link_with: libnautilus,
  include_directories: [
    nautilus_include_dirs,
    libnautilus_include_dirs
  ],
  dependencies: nautilus_deps,
  # nautilus-main.c, which is part of the main Nautilus executable, uses
  # the header, generated by glib-compile-resources. Passing it on from here
  # will ensure that an internal compile-time dependency is placed on this file,
  # thus avoiding failures that are difficult to reproduce.
  sources: resources
)

nautilus = executable(
  'nautilus',
  'nautilus-main.c',
  dependencies: libnautilus_dep,
  install: true
)

if get_option('tests') == 'all'
  test(
    'nautilus', nautilus,
    args: [
      '--check',
      '--g-fatal-warnings'
    ],
    env: [
      'GSETTINGS_SCHEMA_DIR=@0@'.format(join_paths(meson.build_root(), 'data'))
    ]
  )
endif

nautilus_autorun_software_sources = [
  'nautilus-autorun-software.c',
  'nautilus-icon-info.c',
  'nautilus-icon-info.h'
]

executable(
  'nautilus-autorun-software',
  nautilus_autorun_software_sources,
  include_directories: nautilus_include_dirs,
  dependencies: [
    config_h,
    gtk
  ],
  install: true
)
