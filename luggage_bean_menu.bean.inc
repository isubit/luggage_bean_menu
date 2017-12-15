<?php
/**
 * @file
 * luggage_bean_menu.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function luggage_bean_menu_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'menu';
  $bean_type->label = 'Menu';
  $bean_type->options = '';
  $bean_type->description = 'Easily configurable menu block';
  $export['menu'] = $bean_type;

  return $export;
}
