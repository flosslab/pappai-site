<?php
/**
 * @file
 * agro_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agro_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tags';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'BI - Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relazione: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'termine';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'tags' => 'tags',
    'abitudine_alimentare' => 0,
    'allergene' => 0,
    'tipologia' => 0,
    'auto_created_voc9_868' => 0,
    'auto_created_voc6_934' => 0,
    'ingredienti' => 0,
    'marchio' => 0,
    'produzione' => 0,
    'stagionalita' => 0,
    'tax' => 0,
    'territorio' => 0,
  );
  /* Campo: Taxonomy term: Nome */
  $handler->display->display_options['fields']['name_field']['id'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name_field']['label'] = '';
  $handler->display->display_options['fields']['name_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name_field']['type'] = 'text_plain';
  $handler->display->display_options['fields']['name_field']['link_to_entity'] = 0;
  /* Campo: COUNT(Taxonomy term: Nome) */
  $handler->display->display_options['fields']['name_field_1']['id'] = 'name_field_1';
  $handler->display->display_options['fields']['name_field_1']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_1']['field'] = 'name_field';
  $handler->display->display_options['fields']['name_field_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name_field_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['name_field_1']['label'] = '';
  $handler->display->display_options['fields']['name_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_field_1']['separator'] = ', ';
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Categoria (field_tipologia) */
  $handler->display->display_options['filters']['field_tipologia_tid']['id'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['filters']['field_tipologia_tid']['field'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator_id'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'Categoria';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_tipologia_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tipologia_tid']['vocabulary'] = 'tipologia';

  /* Display: Dashboard Tag */
  $handler = $view->new_display('page', 'Dashboard Tag', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = 'highcharts';
  $handler->display->display_options['style_options']['label_field'] = 'name_field';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'name_field_1' => 'name_field_1',
    'name_field' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'name_field' => '#2f7ed8',
    'name_field_1' => '#b5832c',
  );
  $handler->display->display_options['style_options']['title'] = 'Frequenza Tag';
  $handler->display->display_options['style_options']['background'] = '#fcfcb6';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Categoria (field_tipologia) */
  $handler->display->display_options['filters']['field_tipologia_tid']['id'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['filters']['field_tipologia_tid']['field'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tipologia_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator_id'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'Categoria del prodotto';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_tipologia_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tipologia_tid']['vocabulary'] = 'tipologia';
  $handler->display->display_options['path'] = 'cruscotto/tags';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Tags';
  $handler->display->display_options['menu']['description'] = 'Tags';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Prodotti per categoria */
  $handler = $view->new_display('page', 'Prodotti per categoria', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = 'highcharts';
  $handler->display->display_options['style_options']['label_field'] = 'name';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'name_1' => 'name_1',
    'name' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'name' => '#2f7ed8',
    'name_1' => '#0d233a',
  );
  $handler->display->display_options['style_options']['title'] = 'Prodotti per categoria';
  $handler->display->display_options['style_options']['background'] = '#fcfcb6';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'categoria';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'tipologia' => 'tipologia',
    'abitudine_alimentare' => 0,
    'allergene' => 0,
    'tags' => 0,
    'auto_created_voc9_868' => 0,
    'auto_created_voc6_934' => 0,
    'ingredienti' => 0,
    'marchio' => 0,
    'produzione' => 0,
    'stagionalita' => 0,
    'tax' => 0,
    'territorio' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Nome Categoria';
  /* Campo: COUNT(Taxonomy term: Name) */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['name_1']['label'] = 'Nome';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Lingua';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['language']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'cruscotto/categories';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Categorie';
  $handler->display->display_options['menu']['description'] = 'Categorie';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Dashboard Allergeni */
  $handler = $view->new_display('page', 'Dashboard Allergeni', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['library'] = 'highcharts';
  $handler->display->display_options['style_options']['label_field'] = 'name_field';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'name_field_1' => 'name_field_1',
    'name_field' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'name_field' => '#2f7ed8',
    'name_field_1' => '#b5832c',
  );
  $handler->display->display_options['style_options']['title'] = 'Frequenza Allergene';
  $handler->display->display_options['style_options']['background'] = '#fcfcb6';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_decimal_count'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'allergene';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'allergene' => 'allergene',
    'abitudine_alimentare' => 0,
    'tipologia' => 0,
    'tags' => 0,
    'auto_created_voc9_868' => 0,
    'auto_created_voc6_934' => 0,
    'ingredienti' => 0,
    'marchio' => 0,
    'produzione' => 0,
    'stagionalita' => 0,
    'tax' => 0,
    'territorio' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Categoria (field_tipologia) */
  $handler->display->display_options['filters']['field_tipologia_tid']['id'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['filters']['field_tipologia_tid']['field'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tipologia_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator_id'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'Categoria di prodotto';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_tipologia_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tipologia_tid']['vocabulary'] = 'tipologia';
  /* Criterio del filtro: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['operator'] = '!=';
  $handler->display->display_options['filters']['name']['value'] = 'Tracce';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Nome';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  /* Criterio del filtro: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name_1']['operator'] = '!=';
  $handler->display->display_options['filters']['name_1']['value'] = 'Presenza';
  $handler->display->display_options['filters']['name_1']['group'] = 1;
  /* Criterio del filtro: Taxonomy term: Nome (name_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_name_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['language']['value'] = array(
    'it' => 'it',
  );
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language_1']['id'] = 'language_1';
  $handler->display->display_options['filters']['language_1']['table'] = 'node';
  $handler->display->display_options['filters']['language_1']['field'] = 'language';
  $handler->display->display_options['filters']['language_1']['value'] = array(
    'it' => 'it',
  );
  $handler->display->display_options['path'] = 'cruscotto/allergeni';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Allergeni';
  $handler->display->display_options['menu']['description'] = 'Allergeni';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Allergeni';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Cruscotto */
  $handler = $view->new_display('page', 'Cruscotto', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'language_1' => 'language_1',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'language_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Piè di pagina: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'categoria';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'tipologia' => 'tipologia',
    'abitudine_alimentare' => 0,
    'allergene' => 0,
    'tags' => 0,
    'auto_created_voc9_868' => 0,
    'auto_created_voc6_934' => 0,
    'ingredienti' => 0,
    'marchio' => 0,
    'produzione' => 0,
    'stagionalita' => 0,
    'tax' => 0,
    'territorio' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Nome Categoria';
  /* Campo: Content: Language */
  $handler->display->display_options['fields']['language_1']['id'] = 'language_1';
  $handler->display->display_options['fields']['language_1']['table'] = 'node';
  $handler->display->display_options['fields']['language_1']['field'] = 'language';
  $handler->display->display_options['fields']['language_1']['label'] = 'Lingua';
  /* Campo: COUNT(Taxonomy term: Name) */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['name_1']['label'] = 'Nome';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'cruscotto';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Cruscotto';
  $handler->display->display_options['menu']['description'] = 'Cruscotto';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['tags'] = $view;

  return $export;
}
