<?php
/**
 * @file
 * luggage_bean_menu.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function luggage_bean_menu_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-menu-field_menu_link'.
  $field_instances['bean-menu-field_menu_link'] = array(
    'bundle' => 'menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_menu_link',
    'label' => 'Link(s)',
    'required' => 1,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-menu-field_menu_orientation'.
  $field_instances['bean-menu-field_menu_orientation'] = array(
    'bundle' => 'menu',
    'default_value' => array(
      0 => array(
        'value' => 'bean-menu_vertical',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_menu_orientation',
    'label' => 'Menu Orientation',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Link(s)');
  t('Menu Orientation');

  return $field_instances;
}
