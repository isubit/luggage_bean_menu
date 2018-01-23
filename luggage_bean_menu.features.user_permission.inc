<?php
/**
 * @file
 * luggage_bean_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any menu bean'.
  $permissions['create any menu bean'] = array(
    'name' => 'create any menu bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any menu bean'.
  $permissions['delete any menu bean'] = array(
    'name' => 'delete any menu bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any menu bean'.
  $permissions['edit any menu bean'] = array(
    'name' => 'edit any menu bean',
    'roles' => array(
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any menu bean'.
  $permissions['view any menu bean'] = array(
    'name' => 'view any menu bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'bean editor' => 'bean editor',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
