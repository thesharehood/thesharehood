<?php
/**
 * @file
 * permissions_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function permissions_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: trusted.
  $roles['trusted'] = array(
    'name' => 'trusted',
    'weight' => 3,
  );

  return $roles;
}
