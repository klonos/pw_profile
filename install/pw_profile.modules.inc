<?php
/**
 * @file
 * Install modules.
 */

/**
 * Install modules.
 */
function pw_profile_install_modules() {
  module_enable(array(
    // Core.
    'admin_bar',
    'contextual',
    'dblog',
    'update',
    'date',
    'email',
    'field_ui',
    'image',
    'link',
    'options', // Required by List.
    'list',
    'number',
    'block',
    'contact',
    'menu',
    'path',
    'redirect',
    'ckeditor',
    'views_ui',

    // Contrib.
    'auto_menu_settings',
    'captcha',
    'copyright_notice',
    'devel',
    'extlink',
    'html5_upload',
    'imagesloaded',
    'imgareaselect',
    'invisimail',
    'libraries',
    'maintenance_page',
    'manualcrop',
    'menu_admin_per_menu',
    'menu_trail_by_path',
    'on_the_web',
    'pathologic',
    'pw_module',
    'recaptcha',
    'remove_generator',
    'responsive_favicons',
    'save_draft',
    'simplify',
    'srcset_image',
    'views_slideshow',
    'views_slideshow_cycle2',
    'xmlsitemap',
    'xmlsitemap_engines',
    'xmlsitemap_menu',
    'xmlsitemap_node',
  ), FALSE);
}

