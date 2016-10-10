<?php
/**
 * @file
 * agro_home_page_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agro_home_page_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'prodotti';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Prodotti';
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
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Rimuovi filtri';
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
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_allergene']['multi_type'] = 'ul';
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia']['element_type'] = '0';
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
  /* Criterio di ordinamento: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Criterio del filtro: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio del filtro: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titolo';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
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
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'Tipo';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tipologia_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tipologia_tid']['vocabulary'] = 'tipologia';
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Abitudine alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergene (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergie';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['description'] = 'Seleziona eventuali allergie, per escludere i prodotti che contengono particolari allergeni';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Allergia al Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    2 => array(
      'title' => 'Intolleranza al Glutine',
      'operator' => 'not',
      'value' => array(
        24 => '24',
      ),
    ),
    3 => array(
      'title' => 'Allergia al Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
      ),
    ),
    4 => array(
      'title' => 'Intolleranza al Lattosio',
      'operator' => 'not',
      'value' => array(
        21 => '21',
      ),
    ),
    5 => array(
      'title' => 'Allergia alle Uova',
      'operator' => 'not',
      'value' => array(
        55 => '55',
        47 => '47',
      ),
    ),
    6 => array(
      'title' => 'Allergia ai Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
      ),
    ),
    7 => array(
      'title' => 'Allergia al Pesce',
      'operator' => 'not',
      'value' => array(
        48 => '48',
        49 => '49',
      ),
    ),
    8 => array(
      'title' => 'Allergia all\'Anid. solforosa/Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
      ),
    ),
    9 => array(
      'title' => 'Allergia agli Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    10 => array(
      'title' => 'Allergia al Sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_allergene_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_allergene_tid']['vocabulary'] = 'allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['hierarchy'] = 1;
  /* Criterio del filtro: Broken/missing handler */
  $handler->display->display_options['filters']['field_territorio_tid']['id'] = 'field_territorio_tid';
  $handler->display->display_options['filters']['field_territorio_tid']['table'] = 'field_data_field_territorio';
  $handler->display->display_options['filters']['field_territorio_tid']['field'] = 'field_territorio_tid';
  $handler->display->display_options['filters']['field_territorio_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_territorio_tid']['value'] = array();
  $handler->display->display_options['filters']['field_territorio_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_territorio_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_territorio_tid']['expose']['operator_id'] = 'field_territorio_tid_op';
  $handler->display->display_options['filters']['field_territorio_tid']['expose']['label'] = 'Territorio';
  $handler->display->display_options['filters']['field_territorio_tid']['expose']['operator'] = 'field_territorio_tid_op';
  $handler->display->display_options['filters']['field_territorio_tid']['expose']['identifier'] = 'field_territorio_tid';
  $handler->display->display_options['filters']['field_territorio_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_territorio_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_territorio_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
  /* Criterio del filtro: Broken/missing handler */
  $handler->display->display_options['filters']['field_categoria_tid']['id'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['table'] = 'field_data_field_categoria';
  $handler->display->display_options['filters']['field_categoria_tid']['field'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_categoria_tid']['value'] = array(
    468 => '468',
    476 => '476',
    492 => '492',
    495 => '495',
    513 => '513',
    515 => '515',
    559 => '559',
    629 => '629',
    643 => '643',
  );
  $handler->display->display_options['filters']['field_categoria_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_categoria_tid']['expose']['operator_id'] = 'field_categoria_tid_op';
  $handler->display->display_options['filters']['field_categoria_tid']['expose']['label'] = 'Categoria';
  $handler->display->display_options['filters']['field_categoria_tid']['expose']['operator'] = 'field_categoria_tid_op';
  $handler->display->display_options['filters']['field_categoria_tid']['expose']['identifier'] = 'field_categoria_tid';
  $handler->display->display_options['filters']['field_categoria_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_categoria_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_categoria_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
  );
  /* Criterio del filtro: Broken/missing handler */
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['id'] = 'field_stagionalita_inizio_value';
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['table'] = 'field_data_field_stagionalita_inizio';
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['field'] = 'field_stagionalita_inizio_value';
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['operator'] = 'or';
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['value'] = array();
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['expose']['operator_id'] = 'field_stagionalita_inizio_value_op';
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['expose']['label'] = 'Stagionalita - Inizio (field_stagionalita_inizio)';
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['expose']['operator'] = 'field_stagionalita_inizio_value_op';
  $handler->display->display_options['filters']['field_stagionalita_inizio_value']['expose']['identifier'] = 'field_stagionalita_inizio_value';

  /* Display: Ricerca Prodotti */
  $handler = $view->new_display('page', 'Ricerca Prodotti', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Rimuovi filtri';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Criterio del filtro: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titolo';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
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
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'Tipo';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tipologia_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tipologia_tid']['vocabulary'] = 'tipologia';
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Abitudine alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergene (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergie';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Intolleranza al Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    2 => array(
      'title' => 'Intolleranza al Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
      ),
    ),
    3 => array(
      'title' => 'Allergie alle Proteine del latte vaccino',
      'operator' => 'not',
      'value' => array(
        18 => '18',
        19 => '19',
      ),
    ),
    4 => array(
      'title' => 'Allergia alle Uova',
      'operator' => 'not',
      'value' => array(
        55 => '55',
        47 => '47',
      ),
    ),
    5 => array(
      'title' => 'Allergia agli Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    6 => array(
      'title' => 'Allergia alla Frutta a guscio',
      'operator' => 'not',
      'value' => array(
        62 => '62',
        63 => '63',
      ),
    ),
    7 => array(
      'title' => 'Allergia alla Soia',
      'operator' => 'not',
      'value' => array(
        42 => '42',
        45 => '45',
      ),
    ),
    8 => array(
      'title' => 'Allergia ai Semi di sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
    9 => array(
      'title' => 'Allergia al Pesce',
      'operator' => 'not',
      'value' => array(
        48 => '48',
        49 => '49',
      ),
    ),
    10 => array(
      'title' => 'Allergia ai Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
      ),
    ),
    11 => array(
      'title' => 'Allergia ai Molluschi',
      'operator' => 'not',
      'value' => array(
        60 => '60',
        61 => '61',
      ),
    ),
    12 => array(
      'title' => 'Allergia al Sedano',
      'operator' => 'not',
      'value' => array(
        58 => '58',
        59 => '59',
      ),
    ),
    13 => array(
      'title' => 'Allergia alla Senape',
      'operator' => 'not',
      'value' => array(
        56 => '56',
        57 => '57',
      ),
    ),
    14 => array(
      'title' => 'Allergia all\'Anid. solforosa/Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
      ),
    ),
    15 => array(
      'title' => 'Allergia ai Lupini',
      'operator' => 'not',
      'value' => array(
        64 => '64',
        65 => '65',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_allergene_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_allergene_tid']['vocabulary'] = 'allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'prodotti';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Ricerca prodotti';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['prodotti'] = $view;

  return $export;
}
