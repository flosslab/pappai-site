<?php
/**
 * @file
 * agro_prodotto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function agro_prodotto_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function agro_prodotto_node_info() {
  $items = array(
    'prodotto' => array(
      'name' => t('Prodotto'),
      'base' => 'node_content',
      'description' => t('Scheda Prodotto Agroalimentare'),
      'has_title' => '1',
      'title_label' => t('Nome del prodotto'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
