<?php
/**
 * @file
 * agro_prodotti_correlati.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agro_prodotti_correlati_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Prodotti correlati';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '5';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Intestazione: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4>Tutti i prodotti di <span class="title-produttore">[field_produttore]</h4>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relazione: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_produttore_target_id']['id'] = 'field_produttore_target_id';
  $handler->display->display_options['relationships']['field_produttore_target_id']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['relationships']['field_produttore_target_id']['field'] = 'field_produttore_target_id';
  $handler->display->display_options['relationships']['field_produttore_target_id']['label'] = 'Contenuto entity referenced from field_produttore';
  $handler->display->display_options['relationships']['field_produttore_target_id']['required'] = TRUE;
  /* Relazione: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_produttore_node']['id'] = 'reverse_field_produttore_node';
  $handler->display->display_options['relationships']['reverse_field_produttore_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_produttore_node']['field'] = 'reverse_field_produttore_node';
  $handler->display->display_options['relationships']['reverse_field_produttore_node']['relationship'] = 'field_produttore_target_id';
  $handler->display->display_options['relationships']['reverse_field_produttore_node']['label'] = 'Contenuto referencing Contenuto from field_produttore';
  $handler->display->display_options['relationships']['reverse_field_produttore_node']['required'] = TRUE;
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Criterio di ordinamento: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contestuale: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_produttore_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prodotto' => 'prodotto',
  );
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Prodotti correlati */
  $handler = $view->new_display('block', 'Prodotti correlati', 'block');
  $export['related_products'] = $view;

  return $export;
}
