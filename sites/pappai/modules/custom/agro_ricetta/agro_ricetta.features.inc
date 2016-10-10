<?php
/**
 * @file
 * agro_ricetta.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function agro_ricetta_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function agro_ricetta_node_info() {
  $items = array(
    'ricetta' => array(
      'name' => t('Ricetta'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
