<?php
/**
 * @file
 * agro_home_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agro_home_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'prodotti_home_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Prodotti Home page';
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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'AZZERA I FILTRI';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relazione: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_produttore_target_id']['id'] = 'field_produttore_target_id';
  $handler->display->display_options['relationships']['field_produttore_target_id']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['relationships']['field_produttore_target_id']['field'] = 'field_produttore_target_id';
  $handler->display->display_options['relationships']['field_produttore_target_id']['label'] = 'Contenuto entity referenced from field_produttore';
  /* Relazione: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'termine';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'marchio' => 'marchio',
    'abitudine_alimentare' => 0,
    'allergene' => 0,
    'tipologia' => 0,
    'tags' => 0,
    'auto_created_voc9_868' => 0,
    'auto_created_voc6_934' => 0,
    'ingredienti' => 0,
    'produzione' => 0,
    'stagionalita' => 0,
    'tax' => 0,
    'territorio' => 0,
  );
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => 'thumb_prodotti__350x350_',
    'image_link' => '',
  );
  /* Campo: Content: Allergie e intolleranze */
  $handler->display->display_options['fields']['field_allergene']['id'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['fields']['field_allergene']['field'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['label'] = '';
  $handler->display->display_options['fields']['field_allergene']['element_type'] = '0';
  $handler->display->display_options['fields']['field_allergene']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Criterio di ordinamento: Global: Random seed */
  $handler->display->display_options['sorts']['random_seed']['id'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['table'] = 'views';
  $handler->display->display_options['sorts']['random_seed']['field'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_int'] = 'custom';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_custom'] = '60';
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
  /* Criterio del filtro: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Product name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  /* Criterio del filtro: Content: Categoria (field_tipologia) */
  $handler->display->display_options['filters']['field_tipologia_tid']['id'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['filters']['field_tipologia_tid']['field'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator_id'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tipologia_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tipologia_tid']['vocabulary'] = 'tipologia';
  $handler->display->display_options['filters']['field_tipologia_tid']['error_message'] = FALSE;
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Diet and Lifestyle';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['error_message'] = FALSE;
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['value'] = '';
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergy and Intolerance';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['default_group_multiple'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Senza Senape',
      'operator' => 'not',
      'value' => array(
        56 => '56',
        57 => '57',
      ),
    ),
    2 => array(
      'title' => 'Senza Sedano',
      'operator' => 'not',
      'value' => array(
        58 => '58',
        59 => '59',
      ),
    ),
    4 => array(
      'title' => 'Senza Lupini',
      'operator' => 'not',
      'value' => array(
        64 => '64',
        65 => '65',
      ),
    ),
    5 => array(
      'title' => 'Senza An.Solforosa e Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
      ),
    ),
    6 => array(
      'title' => 'Senza Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    7 => array(
      'title' => 'Senza Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
      ),
    ),
    8 => array(
      'title' => 'Senza Proteine del latte vaccino',
      'operator' => 'not',
      'value' => array(
        18 => '18',
        19 => '19',
      ),
    ),
    9 => array(
      'title' => 'Senza Uova',
      'operator' => 'not',
      'value' => array(
        55 => '55',
        47 => '47',
      ),
    ),
    10 => array(
      'title' => 'Senza Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    11 => array(
      'title' => 'Senza Frutta a guscio',
      'operator' => 'not',
      'value' => array(
        62 => '62',
        63 => '63',
      ),
    ),
    12 => array(
      'title' => 'Senza Soia',
      'operator' => 'not',
      'value' => array(
        42 => '42',
        45 => '45',
      ),
    ),
    13 => array(
      'title' => 'Senza Semi di Sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
    14 => array(
      'title' => 'Senza Pesce',
      'operator' => 'not',
      'value' => array(
        48 => '48',
        49 => '49',
      ),
    ),
    15 => array(
      'title' => 'Senza Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
      ),
    ),
    16 => array(
      'title' => 'Senza Molluschi',
      'operator' => 'not',
      'value' => array(
        60 => '60',
        61 => '61',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_allergene_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_allergene_tid']['vocabulary'] = 'allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['hierarchy'] = 1;
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Criterio del filtro: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search..';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
  );

  /* Display: Ricerca prodotti */
  $handler = $view->new_display('page', 'Ricerca prodotti', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => 'thumb_prodotti__350x350_',
    'image_link' => '',
  );
  /* Campo: Content: Allergie e intolleranze */
  $handler->display->display_options['fields']['field_allergene']['id'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['fields']['field_allergene']['field'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['label'] = '';
  $handler->display->display_options['fields']['field_allergene']['element_type'] = '0';
  $handler->display->display_options['fields']['field_allergene']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Campo: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corpo';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_produttore_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'produttore';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Campo: Content: Filiera prodotto */
  $handler->display->display_options['fields']['field_filiera_prodotto']['id'] = 'field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['table'] = 'field_data_field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['field'] = 'field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['label'] = '';
  $handler->display->display_options['fields']['field_filiera_prodotto']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_filiera_prodotto']['element_label_colon'] = FALSE;
  /* Campo: Content: Tecniche di produzione */
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['id'] = 'field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['table'] = 'field_data_field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['field'] = 'field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['label'] = '';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['element_label_colon'] = FALSE;
  /* Campo: Content: Storia */
  $handler->display->display_options['fields']['field_storia']['id'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['table'] = 'field_data_field_storia';
  $handler->display->display_options['fields']['field_storia']['field'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['label'] = '';
  $handler->display->display_options['fields']['field_storia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_storia']['element_label_colon'] = FALSE;
  /* Campo: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterio del filtro: Content: Categoria (field_tipologia) */
  $handler->display->display_options['filters']['field_tipologia_tid']['id'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['filters']['field_tipologia_tid']['field'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tipologia_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator_id'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tipologia_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tipologia_tid']['vocabulary'] = 'tipologia';
  $handler->display->display_options['filters']['field_tipologia_tid']['error_message'] = FALSE;
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Diet and Lifestyle';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['error_message'] = FALSE;
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['value'] = '';
  $handler->display->display_options['filters']['field_allergene_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergy and Intolerance';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['default_group_multiple'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Senza Senape',
      'operator' => 'not',
      'value' => array(
        56 => '56',
        57 => '57',
      ),
    ),
    2 => array(
      'title' => 'Senza Sedano',
      'operator' => 'not',
      'value' => array(
        58 => '58',
        59 => '59',
      ),
    ),
    4 => array(
      'title' => 'Senza Lupini',
      'operator' => 'not',
      'value' => array(
        64 => '64',
        65 => '65',
      ),
    ),
    5 => array(
      'title' => 'Senza An.Solforosa e Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
      ),
    ),
    6 => array(
      'title' => 'Senza Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    7 => array(
      'title' => 'Senza Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
      ),
    ),
    8 => array(
      'title' => 'Senza Proteine del latte vaccino',
      'operator' => 'not',
      'value' => array(
        18 => '18',
        19 => '19',
      ),
    ),
    9 => array(
      'title' => 'Senza Uova',
      'operator' => 'not',
      'value' => array(
        55 => '55',
        47 => '47',
      ),
    ),
    10 => array(
      'title' => 'Senza Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    11 => array(
      'title' => 'Senza Frutta a guscio',
      'operator' => 'not',
      'value' => array(
        62 => '62',
        63 => '63',
      ),
    ),
    12 => array(
      'title' => 'Senza Soia',
      'operator' => 'not',
      'value' => array(
        42 => '42',
        45 => '45',
      ),
    ),
    13 => array(
      'title' => 'Senza Semi di Sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
    14 => array(
      'title' => 'Senza Pesce',
      'operator' => 'not',
      'value' => array(
        48 => '48',
        49 => '49',
      ),
    ),
    15 => array(
      'title' => 'Senza Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
      ),
    ),
    16 => array(
      'title' => 'Senza Molluschi',
      'operator' => 'not',
      'value' => array(
        60 => '60',
        61 => '61',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_allergene_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_allergene_tid']['vocabulary'] = 'allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['hierarchy'] = 1;
  /* Criterio del filtro: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Criterio del filtro: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search..';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
    'title_1' => 'title_1',
    'field_filiera_prodotto' => 'field_filiera_prodotto',
    'field_tecniche_di_produzione' => 'field_tecniche_di_produzione',
    'field_storia' => 'field_storia',
    'name' => 'name',
  );
  $handler->display->display_options['path'] = 'ricerca-prodotti';
  $export['prodotti_home_page'] = $view;

  return $export;
}
