<?php
/**
 * @file
 * agro_rest_services.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function agro_rest_services_user_default_roles() {
  $roles = array();

  // Exported role: ws user.
  $roles['ws user'] = array(
    'name' => 'ws user',
    'weight' => 4,
  );

  return $roles;
}
