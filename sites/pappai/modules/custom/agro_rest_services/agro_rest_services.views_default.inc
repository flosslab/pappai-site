<?php
/**
 * @file
 * agro_rest_services.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agro_rest_services_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dettaglio_prodotto';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dettaglio Prodotto';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dettaglio Prodotto';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Marchio */
  $handler->display->display_options['fields']['field_marchio']['id'] = 'field_marchio';
  $handler->display->display_options['fields']['field_marchio']['table'] = 'field_data_field_marchio';
  $handler->display->display_options['fields']['field_marchio']['field'] = 'field_marchio';
  $handler->display->display_options['fields']['field_marchio']['label'] = '';
  $handler->display->display_options['fields']['field_marchio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marchio']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_marchio']['delta_offset'] = '0';
  /* Campo: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Sito web produttore */
  $handler->display->display_options['fields']['field_sito_azienda']['id'] = 'field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['table'] = 'field_data_field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['field'] = 'field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['label'] = '';
  $handler->display->display_options['fields']['field_sito_azienda']['element_label_colon'] = FALSE;
  /* Campo: Content: Storia */
  $handler->display->display_options['fields']['field_storia']['id'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['table'] = 'field_data_field_storia';
  $handler->display->display_options['fields']['field_storia']['field'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['label'] = '';
  $handler->display->display_options['fields']['field_storia']['element_label_colon'] = FALSE;
  /* Campo: Content: Abitudine alimentare */
  $handler->display->display_options['fields']['field_abitudine_alimentare']['id'] = 'field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['field'] = 'field_abitudine_alimentare';
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  /* Criterio del filtro: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prodotto' => 'prodotto',
  );
  /* Criterio del filtro: nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['ui_name'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['description'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['field_language'] = 'en';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Marchio */
  $handler->display->display_options['fields']['field_marchio']['id'] = 'field_marchio';
  $handler->display->display_options['fields']['field_marchio']['table'] = 'field_data_field_marchio';
  $handler->display->display_options['fields']['field_marchio']['field'] = 'field_marchio';
  $handler->display->display_options['fields']['field_marchio']['label'] = '';
  $handler->display->display_options['fields']['field_marchio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marchio']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_marchio']['delta_offset'] = '0';
  /* Campo: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Sito web produttore */
  $handler->display->display_options['fields']['field_sito_azienda']['id'] = 'field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['table'] = 'field_data_field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['field'] = 'field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['label'] = '';
  $handler->display->display_options['fields']['field_sito_azienda']['element_label_colon'] = FALSE;
  /* Campo: Content: Storia */
  $handler->display->display_options['fields']['field_storia']['id'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['table'] = 'field_data_field_storia';
  $handler->display->display_options['fields']['field_storia']['field'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['label'] = '';
  $handler->display->display_options['fields']['field_storia']['element_label_colon'] = FALSE;
  /* Campo: Content: Abitudine alimentare */
  $handler->display->display_options['fields']['field_abitudine_alimentare']['id'] = 'field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['field'] = 'field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['label'] = '';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['element_type'] = '0';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_abitudine_alimentare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_abitudine_alimentare']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['delta_offset'] = '0';
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => '',
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
  $handler->display->display_options['fields']['field_allergene']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
  /* Campo: Content: Amido */
  $handler->display->display_options['fields']['field_amido_tx']['id'] = 'field_amido_tx';
  $handler->display->display_options['fields']['field_amido_tx']['table'] = 'field_data_field_amido_tx';
  $handler->display->display_options['fields']['field_amido_tx']['field'] = 'field_amido_tx';
  $handler->display->display_options['fields']['field_amido_tx']['label'] = '';
  $handler->display->display_options['fields']['field_amido_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_amido_tx']['type'] = 'text_plain';
  /* Campo: Content: Carboidrati */
  $handler->display->display_options['fields']['field_carboidrati_tx']['id'] = 'field_carboidrati_tx';
  $handler->display->display_options['fields']['field_carboidrati_tx']['table'] = 'field_data_field_carboidrati_tx';
  $handler->display->display_options['fields']['field_carboidrati_tx']['field'] = 'field_carboidrati_tx';
  $handler->display->display_options['fields']['field_carboidrati_tx']['label'] = '';
  $handler->display->display_options['fields']['field_carboidrati_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carboidrati_tx']['type'] = 'text_plain';
  /* Campo: Content: Carboidrati (di cui zuccheri) */
  $handler->display->display_options['fields']['field_carboidrati_di_cui_sat_tx']['id'] = 'field_carboidrati_di_cui_sat_tx';
  $handler->display->display_options['fields']['field_carboidrati_di_cui_sat_tx']['table'] = 'field_data_field_carboidrati_di_cui_sat_tx';
  $handler->display->display_options['fields']['field_carboidrati_di_cui_sat_tx']['field'] = 'field_carboidrati_di_cui_sat_tx';
  $handler->display->display_options['fields']['field_carboidrati_di_cui_sat_tx']['label'] = '';
  $handler->display->display_options['fields']['field_carboidrati_di_cui_sat_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carboidrati_di_cui_sat_tx']['type'] = 'text_plain';
  /* Campo: Content: Fibre */
  $handler->display->display_options['fields']['field_fibre_tx']['id'] = 'field_fibre_tx';
  $handler->display->display_options['fields']['field_fibre_tx']['table'] = 'field_data_field_fibre_tx';
  $handler->display->display_options['fields']['field_fibre_tx']['field'] = 'field_fibre_tx';
  $handler->display->display_options['fields']['field_fibre_tx']['label'] = '';
  $handler->display->display_options['fields']['field_fibre_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fibre_tx']['type'] = 'text_plain';
  /* Campo: Content: Grassi */
  $handler->display->display_options['fields']['field_grassi_tx']['id'] = 'field_grassi_tx';
  $handler->display->display_options['fields']['field_grassi_tx']['table'] = 'field_data_field_grassi_tx';
  $handler->display->display_options['fields']['field_grassi_tx']['field'] = 'field_grassi_tx';
  $handler->display->display_options['fields']['field_grassi_tx']['label'] = '';
  $handler->display->display_options['fields']['field_grassi_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_grassi_tx']['type'] = 'text_plain';
  /* Campo: Content: Grassi (di cui saturi) */
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['id'] = 'field_grassi_di_cui_saturi_tx';
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['table'] = 'field_data_field_grassi_di_cui_saturi_tx';
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['field'] = 'field_grassi_di_cui_saturi_tx';
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['label'] = '';
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_grassi_di_cui_saturi_tx']['type'] = 'text_plain';
  /* Campo: Content: Minerali */
  $handler->display->display_options['fields']['field_minerali_tx']['id'] = 'field_minerali_tx';
  $handler->display->display_options['fields']['field_minerali_tx']['table'] = 'field_data_field_minerali_tx';
  $handler->display->display_options['fields']['field_minerali_tx']['field'] = 'field_minerali_tx';
  $handler->display->display_options['fields']['field_minerali_tx']['label'] = '';
  $handler->display->display_options['fields']['field_minerali_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minerali_tx']['type'] = 'text_plain';
  /* Campo: Content: Monoinsaturi */
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['id'] = 'field_monoinsaturi_tx';
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['table'] = 'field_data_field_monoinsaturi_tx';
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['field'] = 'field_monoinsaturi_tx';
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['label'] = '';
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_monoinsaturi_tx']['type'] = 'text_plain';
  /* Campo: Content: Polinsaturi */
  $handler->display->display_options['fields']['field_polinsaturi_tx']['id'] = 'field_polinsaturi_tx';
  $handler->display->display_options['fields']['field_polinsaturi_tx']['table'] = 'field_data_field_polinsaturi_tx';
  $handler->display->display_options['fields']['field_polinsaturi_tx']['field'] = 'field_polinsaturi_tx';
  $handler->display->display_options['fields']['field_polinsaturi_tx']['label'] = '';
  $handler->display->display_options['fields']['field_polinsaturi_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_polinsaturi_tx']['type'] = 'text_plain';
  /* Campo: Content: Polioli */
  $handler->display->display_options['fields']['field_polioli_tx']['id'] = 'field_polioli_tx';
  $handler->display->display_options['fields']['field_polioli_tx']['table'] = 'field_data_field_polioli_tx';
  $handler->display->display_options['fields']['field_polioli_tx']['field'] = 'field_polioli_tx';
  $handler->display->display_options['fields']['field_polioli_tx']['label'] = '';
  $handler->display->display_options['fields']['field_polioli_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_polioli_tx']['type'] = 'text_plain';
  /* Campo: Content: Proteine */
  $handler->display->display_options['fields']['field_proteine_tx']['id'] = 'field_proteine_tx';
  $handler->display->display_options['fields']['field_proteine_tx']['table'] = 'field_data_field_proteine_tx';
  $handler->display->display_options['fields']['field_proteine_tx']['field'] = 'field_proteine_tx';
  $handler->display->display_options['fields']['field_proteine_tx']['label'] = '';
  $handler->display->display_options['fields']['field_proteine_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proteine_tx']['type'] = 'text_plain';
  /* Campo: Content: Sodio */
  $handler->display->display_options['fields']['field_sodio_tx']['id'] = 'field_sodio_tx';
  $handler->display->display_options['fields']['field_sodio_tx']['table'] = 'field_data_field_sodio_tx';
  $handler->display->display_options['fields']['field_sodio_tx']['field'] = 'field_sodio_tx';
  $handler->display->display_options['fields']['field_sodio_tx']['label'] = '';
  $handler->display->display_options['fields']['field_sodio_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sodio_tx']['type'] = 'text_plain';
  /* Campo: Content: Valore energetico Kcal */
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['id'] = 'field_valore_energetico_kcal_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['table'] = 'field_data_field_valore_energetico_kcal_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['field'] = 'field_valore_energetico_kcal_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['label'] = '';
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valore_energetico_kcal_tx']['type'] = 'text_plain';
  /* Campo: Content: Valore energetico Kj */
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['id'] = 'field_valore_energetico_kj_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['table'] = 'field_data_field_valore_energetico_kj_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['field'] = 'field_valore_energetico_kj_tx';
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['label'] = '';
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valore_energetico_kj_tx']['type'] = 'text_plain';
  /* Campo: Content: Vitamine */
  $handler->display->display_options['fields']['field_vitamine_tx']['id'] = 'field_vitamine_tx';
  $handler->display->display_options['fields']['field_vitamine_tx']['table'] = 'field_data_field_vitamine_tx';
  $handler->display->display_options['fields']['field_vitamine_tx']['field'] = 'field_vitamine_tx';
  $handler->display->display_options['fields']['field_vitamine_tx']['label'] = '';
  $handler->display->display_options['fields']['field_vitamine_tx']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vitamine_tx']['type'] = 'text_plain';
  /* Campo: Content: Ingredienti */
  $handler->display->display_options['fields']['field_ingredienti']['id'] = 'field_ingredienti';
  $handler->display->display_options['fields']['field_ingredienti']['table'] = 'field_data_field_ingredienti';
  $handler->display->display_options['fields']['field_ingredienti']['field'] = 'field_ingredienti';
  $handler->display->display_options['fields']['field_ingredienti']['label'] = '';
  $handler->display->display_options['fields']['field_ingredienti']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ingredienti']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ingredienti']['delta_offset'] = '0';
  /* Campo: Content: Luogo di produzione */
  $handler->display->display_options['fields']['field_prodotto_a']['id'] = 'field_prodotto_a';
  $handler->display->display_options['fields']['field_prodotto_a']['table'] = 'field_data_field_prodotto_a';
  $handler->display->display_options['fields']['field_prodotto_a']['field'] = 'field_prodotto_a';
  $handler->display->display_options['fields']['field_prodotto_a']['label'] = '';
  $handler->display->display_options['fields']['field_prodotto_a']['element_type'] = '0';
  $handler->display->display_options['fields']['field_prodotto_a']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prodotto_a']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_prodotto_a']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_prodotto_a']['delta_offset'] = '0';
  /* Campo: Content: Turismo ed eventi */
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['id'] = 'field_turismo_ed_eventi';
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['table'] = 'field_data_field_turismo_ed_eventi';
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['field'] = 'field_turismo_ed_eventi';
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['label'] = '';
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_turismo_ed_eventi']['type'] = 'text_plain';
  /* Campo: Content: Filiera prodotto */
  $handler->display->display_options['fields']['field_filiera_prodotto']['id'] = 'field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['table'] = 'field_data_field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['field'] = 'field_filiera_prodotto';
  $handler->display->display_options['fields']['field_filiera_prodotto']['label'] = '';
  $handler->display->display_options['fields']['field_filiera_prodotto']['element_type'] = '0';
  $handler->display->display_options['fields']['field_filiera_prodotto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_filiera_prodotto']['element_default_classes'] = FALSE;
  /* Campo: Content: Tecniche di produzione */
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['id'] = 'field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['table'] = 'field_data_field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['field'] = 'field_tecniche_di_produzione';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['label'] = '';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tecniche_di_produzione']['type'] = 'text_plain';
  /* Campo: Content: Tipologia produzione */
  $handler->display->display_options['fields']['field_tipologia_produzione']['id'] = 'field_tipologia_produzione';
  $handler->display->display_options['fields']['field_tipologia_produzione']['table'] = 'field_data_field_tipologia_produzione';
  $handler->display->display_options['fields']['field_tipologia_produzione']['field'] = 'field_tipologia_produzione';
  $handler->display->display_options['fields']['field_tipologia_produzione']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia_produzione']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipologia_produzione']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia_produzione']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia_produzione']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Immagine copertina */
  $handler->display->display_options['fields']['field_immagine_copertina']['id'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['table'] = 'field_data_field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['field'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_copertina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_copertina']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_copertina']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Campo: Content: Porzione */
  $handler->display->display_options['fields']['field_porzione']['id'] = 'field_porzione';
  $handler->display->display_options['fields']['field_porzione']['table'] = 'field_data_field_porzione';
  $handler->display->display_options['fields']['field_porzione']['field'] = 'field_porzione';
  $handler->display->display_options['fields']['field_porzione']['label'] = '';
  $handler->display->display_options['fields']['field_porzione']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_porzione']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_porzione']['type'] = 'i18n_list_default';
  $handler->display->display_options['fields']['field_porzione']['settings'] = array(
    'textformatter_type' => 'ul',
    'textformatter_comma_and' => 0,
    'textformatter_comma_full_stop' => 0,
    'textformatter_comma_override' => 0,
    'textformatter_separator_custom' => '',
    'textformatter_separator_custom_tag' => 'span',
    'textformatter_separator_custom_class' => 'textformatter-separator',
    'textformatter_comma_tag' => 'div',
    'textformatter_class' => 'textformatter-list',
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
  /* Criterio del filtro: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prodotto' => 'prodotto',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterio del filtro: nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['ui_name'] = 'nid';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['description'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'dettaglio_prodotto';

  /* Display: Services 2 */
  $handler = $view->new_display('services', 'Services 2', 'services_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dettaglio Ricetta';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relazione: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['id'] = 'reverse_field_ricette_node';
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['field'] = 'reverse_field_ricette_node';
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['label'] = 'Contenuto referencing Contenuto from field_ricette';
  $handler->display->display_options['relationships']['reverse_field_ricette_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Campo: Content: Difficoltà */
  $handler->display->display_options['fields']['field_difficolt_']['id'] = 'field_difficolt_';
  $handler->display->display_options['fields']['field_difficolt_']['table'] = 'field_data_field_difficolt_';
  $handler->display->display_options['fields']['field_difficolt_']['field'] = 'field_difficolt_';
  $handler->display->display_options['fields']['field_difficolt_']['label'] = '';
  $handler->display->display_options['fields']['field_difficolt_']['element_type'] = '0';
  $handler->display->display_options['fields']['field_difficolt_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_difficolt_']['element_default_classes'] = FALSE;
  /* Campo: Content: Immagine ricetta */
  $handler->display->display_options['fields']['field_immagine_ricetta']['id'] = 'field_immagine_ricetta';
  $handler->display->display_options['fields']['field_immagine_ricetta']['table'] = 'field_data_field_immagine_ricetta';
  $handler->display->display_options['fields']['field_immagine_ricetta']['field'] = 'field_immagine_ricetta';
  $handler->display->display_options['fields']['field_immagine_ricetta']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_ricetta']['element_type'] = '0';
  $handler->display->display_options['fields']['field_immagine_ricetta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_ricetta']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_ricetta']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_ricetta']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Tempo */
  $handler->display->display_options['fields']['field_tempo']['id'] = 'field_tempo';
  $handler->display->display_options['fields']['field_tempo']['table'] = 'field_data_field_tempo';
  $handler->display->display_options['fields']['field_tempo']['field'] = 'field_tempo';
  $handler->display->display_options['fields']['field_tempo']['label'] = '';
  $handler->display->display_options['fields']['field_tempo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tempo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tempo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tempo']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contestuale: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_ricette_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tutti';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return str_replace("|", "+", $_GET[\'nid\']);';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'ricetta' => 'ricetta',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'ricetta_prodotto';
  $export['dettaglio_prodotto'] = $view;

  $view = new view();
  $view->name = 'dettaglio_prodotto_by_codice_a_barre';
  $view->description = 'Dettaglio di un prodotto dato il codice a barre';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dettaglio Prodotto by Barcode';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dettaglio Prodotto';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Marchio */
  $handler->display->display_options['fields']['field_marchio']['id'] = 'field_marchio';
  $handler->display->display_options['fields']['field_marchio']['table'] = 'field_data_field_marchio';
  $handler->display->display_options['fields']['field_marchio']['field'] = 'field_marchio';
  $handler->display->display_options['fields']['field_marchio']['label'] = '';
  $handler->display->display_options['fields']['field_marchio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marchio']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_marchio']['delta_offset'] = '0';
  /* Campo: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Sito web produttore */
  $handler->display->display_options['fields']['field_sito_azienda']['id'] = 'field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['table'] = 'field_data_field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['field'] = 'field_sito_azienda';
  $handler->display->display_options['fields']['field_sito_azienda']['label'] = '';
  $handler->display->display_options['fields']['field_sito_azienda']['element_label_colon'] = FALSE;
  /* Campo: Content: Storia */
  $handler->display->display_options['fields']['field_storia']['id'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['table'] = 'field_data_field_storia';
  $handler->display->display_options['fields']['field_storia']['field'] = 'field_storia';
  $handler->display->display_options['fields']['field_storia']['label'] = '';
  $handler->display->display_options['fields']['field_storia']['element_label_colon'] = FALSE;
  /* Campo: Content: Abitudine alimentare */
  $handler->display->display_options['fields']['field_abitudine_alimentare']['id'] = 'field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['fields']['field_abitudine_alimentare']['field'] = 'field_abitudine_alimentare';
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  /* Criterio del filtro: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prodotto' => 'prodotto',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Criterio del filtro: barcode */
  $handler->display->display_options['filters']['field_codice_a_barre_value']['id'] = 'field_codice_a_barre_value';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['table'] = 'field_data_field_codice_a_barre';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['field'] = 'field_codice_a_barre_value';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['ui_name'] = 'barcode';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['group'] = 1;
  $handler->display->display_options['filters']['field_codice_a_barre_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['operator_id'] = 'field_codice_a_barre_value_op';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['label'] = 'barcode';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['description'] = 'barcode';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['operator'] = 'field_codice_a_barre_value_op';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['identifier'] = 'barcode';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Campo: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['element_type'] = '0';
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['element_default_classes'] = FALSE;
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
  /* Criterio del filtro: barcode */
  $handler->display->display_options['filters']['field_codice_a_barre_value']['id'] = 'field_codice_a_barre_value';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['table'] = 'field_data_field_codice_a_barre';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['field'] = 'field_codice_a_barre_value';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['ui_name'] = 'barcode';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['group'] = 1;
  $handler->display->display_options['filters']['field_codice_a_barre_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['operator_id'] = 'field_codice_a_barre_value_op';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['label'] = 'barcode';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['description'] = 'barcode';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['operator'] = 'field_codice_a_barre_value_op';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['identifier'] = 'barcode';
  $handler->display->display_options['filters']['field_codice_a_barre_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
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
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'dettaglio_prodotto_barcode';
  $export['dettaglio_prodotto_by_codice_a_barre'] = $view;

  $view = new view();
  $view->name = 'lista_prodotti';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lista prodotti';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lista prodotti';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Criterio di ordinamento: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'lista_prodotti';
  $export['lista_prodotti'] = $view;

  $view = new view();
  $view->name = 'ricerca_prodotti';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ricerca prodotti';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Filtro prodotti';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
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
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_immagine_anteprima' => 'field_immagine_anteprima',
    'field_produttore' => 'field_produttore',
    'field_tipologia' => 'field_tipologia',
    'field_allergene' => 'field_allergene',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_immagine_anteprima' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_produttore' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tipologia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_allergene' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Allergie e intolleranze */
  $handler->display->display_options['fields']['field_allergene']['id'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['fields']['field_allergene']['field'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['label'] = '';
  $handler->display->display_options['fields']['field_allergene']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
  /* Campo: Content: Immagine copertina */
  $handler->display->display_options['fields']['field_immagine_copertina']['id'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['table'] = 'field_data_field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['field'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_copertina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_copertina']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_copertina']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Criterio di ordinamento: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'cat';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'cat';
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
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_allergene_tid']['value'] = array(
    25 => '25',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_allergene_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Senza Proteine latte vaccino',
      'operator' => 'not',
      'value' => array(
        18 => '18',
        19 => '19',
      ),
    ),
    2 => array(
      'title' => 'Senza Lupini',
      'operator' => 'not',
      'value' => array(
        64 => '64',
        65 => '65',
      ),
    ),
    3 => array(
      'title' => 'Senza Soia',
      'operator' => 'not',
      'value' => array(
        42 => '42',
        45 => '45',
      ),
    ),
    4 => array(
      'title' => 'Senza Frutta a guscio',
      'operator' => 'not',
      'value' => array(
        62 => '62',
        63 => '63',
      ),
    ),
    5 => array(
      'title' => 'Senza Molluschi',
      'operator' => 'not',
      'value' => array(
        60 => '60',
        61 => '61',
      ),
    ),
    6 => array(
      'title' => 'Senza Sedano',
      'operator' => 'not',
      'value' => array(
        58 => '58',
        59 => '59',
      ),
    ),
    7 => array(
      'title' => 'Senza Senape',
      'operator' => 'not',
      'value' => array(
        56 => '56',
        57 => '57',
      ),
    ),
    8 => array(
      'title' => 'Senza Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
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
      'title' => 'Senza Sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
    11 => array(
      'title' => 'Senza Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    12 => array(
      'title' => 'Senza Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    13 => array(
      'title' => 'Senza Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
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
      'title' => 'Senza An .Solforosa e Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
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
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Lingua';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Ricerca Service */
  $handler = $view->new_display('services', 'Ricerca Service', 'services_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'offset';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« prima';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ precedente';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'ultima »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Allergie e intolleranze */
  $handler->display->display_options['fields']['field_allergene']['id'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['fields']['field_allergene']['field'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['label'] = '';
  $handler->display->display_options['fields']['field_allergene']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
  /* Campo: Content: Immagine copertina */
  $handler->display->display_options['fields']['field_immagine_copertina']['id'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['table'] = 'field_data_field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['field'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_copertina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_copertina']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_copertina']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio di ordinamento: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_allergene_tid']['value'] = array(
    25 => '25',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_allergene_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Senza Proteine latte vaccino',
      'operator' => 'not',
      'value' => array(
        18 => '18',
        19 => '19',
      ),
    ),
    2 => array(
      'title' => 'Senza Lupini',
      'operator' => 'not',
      'value' => array(
        64 => '64',
        65 => '65',
      ),
    ),
    3 => array(
      'title' => 'Senza Soia',
      'operator' => 'not',
      'value' => array(
        42 => '42',
        45 => '45',
      ),
    ),
    4 => array(
      'title' => 'Senza Frutta a guscio',
      'operator' => 'not',
      'value' => array(
        62 => '62',
        63 => '63',
      ),
    ),
    5 => array(
      'title' => 'Senza Molluschi',
      'operator' => 'not',
      'value' => array(
        60 => '60',
        61 => '61',
      ),
    ),
    6 => array(
      'title' => 'Senza Sedano',
      'operator' => 'not',
      'value' => array(
        58 => '58',
        59 => '59',
      ),
    ),
    7 => array(
      'title' => 'Senza Senape',
      'operator' => 'not',
      'value' => array(
        56 => '56',
        57 => '57',
      ),
    ),
    8 => array(
      'title' => 'Senza Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
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
      'title' => 'Senza Sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
    11 => array(
      'title' => 'Senza Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    12 => array(
      'title' => 'Senza Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    13 => array(
      'title' => 'Senza Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
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
      'title' => 'Senza An .Solforosa e Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
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
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Lingua';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Criterio del filtro: Content: Categoria (field_tipologia) */
  $handler->display->display_options['filters']['field_tipologia_tid']['id'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['filters']['field_tipologia_tid']['field'] = 'field_tipologia_tid';
  $handler->display->display_options['filters']['field_tipologia_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_tipologia_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator_id'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'cat';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'cat';
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
  /* Criterio del filtro: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titolo';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'ricerca_prodotti';

  /* Display: Pagina */
  $handler = $view->new_display('page', 'Pagina', 'page_1');
  $handler->display->display_options['path'] = 'vista_prodotti';

  /* Display: Dashboard Service */
  $handler = $view->new_display('services', 'Dashboard Service', 'services_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dashboard prodotti';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Immagine anteprima */
  $handler->display->display_options['fields']['field_immagine_anteprima']['id'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['field'] = 'field_immagine_anteprima';
  $handler->display->display_options['fields']['field_immagine_anteprima']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_anteprima']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_anteprima']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_anteprima']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Allergie e intolleranze */
  $handler->display->display_options['fields']['field_allergene']['id'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['fields']['field_allergene']['field'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['label'] = '';
  $handler->display->display_options['fields']['field_allergene']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
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
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'cat';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'cat';
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
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_allergene_tid']['value'] = array(
    25 => '25',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_allergene_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Senza Proteine latte vaccino',
      'operator' => 'not',
      'value' => array(
        18 => '18',
        19 => '19',
      ),
    ),
    2 => array(
      'title' => 'Senza Lupini',
      'operator' => 'not',
      'value' => array(
        64 => '64',
        65 => '65',
      ),
    ),
    3 => array(
      'title' => 'Senza Soia',
      'operator' => 'not',
      'value' => array(
        42 => '42',
        45 => '45',
      ),
    ),
    4 => array(
      'title' => 'Senza Frutta a guscio',
      'operator' => 'not',
      'value' => array(
        62 => '62',
        63 => '63',
      ),
    ),
    5 => array(
      'title' => 'Senza Molluschi',
      'operator' => 'not',
      'value' => array(
        60 => '60',
        61 => '61',
      ),
    ),
    6 => array(
      'title' => 'Senza Sedano',
      'operator' => 'not',
      'value' => array(
        58 => '58',
        59 => '59',
      ),
    ),
    7 => array(
      'title' => 'Senza Senape',
      'operator' => 'not',
      'value' => array(
        56 => '56',
        57 => '57',
      ),
    ),
    8 => array(
      'title' => 'Senza Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
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
      'title' => 'Senza Sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
    11 => array(
      'title' => 'Senza Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    12 => array(
      'title' => 'Senza Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    13 => array(
      'title' => 'Senza Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
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
      'title' => 'Senza An .Solforosa e Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
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
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Criterio del filtro: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Criterio del filtro: Content: Immagine anteprima (field_immagine_anteprima:fid) */
  $handler->display->display_options['filters']['field_immagine_anteprima_fid']['id'] = 'field_immagine_anteprima_fid';
  $handler->display->display_options['filters']['field_immagine_anteprima_fid']['table'] = 'field_data_field_immagine_anteprima';
  $handler->display->display_options['filters']['field_immagine_anteprima_fid']['field'] = 'field_immagine_anteprima_fid';
  $handler->display->display_options['filters']['field_immagine_anteprima_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'dashboard_prodotti';

  /* Display: Dashboard Service HR */
  $handler = $view->new_display('services', 'Dashboard Service HR', 'services_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dashboard prodotti';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Allergie e intolleranze */
  $handler->display->display_options['fields']['field_allergene']['id'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['fields']['field_allergene']['field'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['label'] = '';
  $handler->display->display_options['fields']['field_allergene']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
  /* Campo: Content: Immagine copertina */
  $handler->display->display_options['fields']['field_immagine_copertina']['id'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['table'] = 'field_data_field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['field'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_copertina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_copertina']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_copertina']['settings'] = array(
    'image_style' => 'horizontal_dashboard',
    'image_link' => '',
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
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'cat';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'cat';
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
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_allergene_tid']['value'] = array(
    25 => '25',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_allergene_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Senza Proteine latte vaccino',
      'operator' => 'not',
      'value' => array(
        18 => '18',
        19 => '19',
      ),
    ),
    2 => array(
      'title' => 'Senza Lupini',
      'operator' => 'not',
      'value' => array(
        64 => '64',
        65 => '65',
      ),
    ),
    3 => array(
      'title' => 'Senza Soia',
      'operator' => 'not',
      'value' => array(
        42 => '42',
        45 => '45',
      ),
    ),
    4 => array(
      'title' => 'Senza Frutta a guscio',
      'operator' => 'not',
      'value' => array(
        62 => '62',
        63 => '63',
      ),
    ),
    5 => array(
      'title' => 'Senza Molluschi',
      'operator' => 'not',
      'value' => array(
        60 => '60',
        61 => '61',
      ),
    ),
    6 => array(
      'title' => 'Senza Sedano',
      'operator' => 'not',
      'value' => array(
        58 => '58',
        59 => '59',
      ),
    ),
    7 => array(
      'title' => 'Senza Senape',
      'operator' => 'not',
      'value' => array(
        56 => '56',
        57 => '57',
      ),
    ),
    8 => array(
      'title' => 'Senza Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
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
      'title' => 'Senza Sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
    11 => array(
      'title' => 'Senza Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    12 => array(
      'title' => 'Senza Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    13 => array(
      'title' => 'Senza Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
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
      'title' => 'Senza An .Solforosa e Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
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
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Criterio del filtro: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Criterio del filtro: Content: Cover orientation float (field_cover_orientation_float) */
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['id'] = 'field_cover_orientation_float_value';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['table'] = 'field_data_field_cover_orientation_float';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['field'] = 'field_cover_orientation_float_value';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['value']['value'] = '1099';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['group'] = 1;
  /* Criterio del filtro: Content: Immagine copertina (field_immagine_copertina:fid) */
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['id'] = 'field_immagine_copertina_fid';
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['table'] = 'field_data_field_immagine_copertina';
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['field'] = 'field_immagine_copertina_fid';
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['group'] = 1;
  $handler->display->display_options['path'] = 'dashboard_prodotti_hr';

  /* Display: Dashboard Service VR */
  $handler = $view->new_display('services', 'Dashboard Service VR', 'services_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dashboard prodotti';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Content: Produttore */
  $handler->display->display_options['fields']['field_produttore']['id'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['table'] = 'field_data_field_produttore';
  $handler->display->display_options['fields']['field_produttore']['field'] = 'field_produttore';
  $handler->display->display_options['fields']['field_produttore']['label'] = '';
  $handler->display->display_options['fields']['field_produttore']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_produttore']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Content: Categoria */
  $handler->display->display_options['fields']['field_tipologia']['id'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['table'] = 'field_data_field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['field'] = 'field_tipologia';
  $handler->display->display_options['fields']['field_tipologia']['label'] = '';
  $handler->display->display_options['fields']['field_tipologia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipologia']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Content: Allergie e intolleranze */
  $handler->display->display_options['fields']['field_allergene']['id'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['fields']['field_allergene']['field'] = 'field_allergene';
  $handler->display->display_options['fields']['field_allergene']['label'] = '';
  $handler->display->display_options['fields']['field_allergene']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_allergene']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_allergene']['delta_offset'] = '0';
  /* Campo: Content: Immagine copertina */
  $handler->display->display_options['fields']['field_immagine_copertina']['id'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['table'] = 'field_data_field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['field'] = 'field_immagine_copertina';
  $handler->display->display_options['fields']['field_immagine_copertina']['label'] = '';
  $handler->display->display_options['fields']['field_immagine_copertina']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine_copertina']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_copertina']['settings'] = array(
    'image_style' => 'vertical_dashboard',
    'image_link' => '',
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
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['label'] = 'cat';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['operator'] = 'field_tipologia_tid_op';
  $handler->display->display_options['filters']['field_tipologia_tid']['expose']['identifier'] = 'cat';
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
  /* Criterio del filtro: Content: Abitudine alimentare (field_abitudine_alimentare) */
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['id'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['table'] = 'field_data_field_abitudine_alimentare';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['field'] = 'field_abitudine_alimentare_tid';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator_id'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['label'] = 'Abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['operator'] = 'field_abitudine_alimentare_tid_op';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['identifier'] = 'abit';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_abitudine_alimentare_tid']['vocabulary'] = 'abitudine_alimentare';
  /* Criterio del filtro: Content: Allergie e intolleranze (field_allergene) */
  $handler->display->display_options['filters']['field_allergene_tid']['id'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['table'] = 'field_data_field_allergene';
  $handler->display->display_options['filters']['field_allergene_tid']['field'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_allergene_tid']['value'] = array(
    25 => '25',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_allergene_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_allergene_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator_id'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['operator'] = 'field_allergene_tid_op';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['label'] = 'Allergie e intolleranze (field_allergene)';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['identifier'] = 'field_allergene_tid';
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_allergene_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Senza Proteine latte vaccino',
      'operator' => 'not',
      'value' => array(
        18 => '18',
        19 => '19',
      ),
    ),
    2 => array(
      'title' => 'Senza Lupini',
      'operator' => 'not',
      'value' => array(
        64 => '64',
        65 => '65',
      ),
    ),
    3 => array(
      'title' => 'Senza Soia',
      'operator' => 'not',
      'value' => array(
        42 => '42',
        45 => '45',
      ),
    ),
    4 => array(
      'title' => 'Senza Frutta a guscio',
      'operator' => 'not',
      'value' => array(
        62 => '62',
        63 => '63',
      ),
    ),
    5 => array(
      'title' => 'Senza Molluschi',
      'operator' => 'not',
      'value' => array(
        60 => '60',
        61 => '61',
      ),
    ),
    6 => array(
      'title' => 'Senza Sedano',
      'operator' => 'not',
      'value' => array(
        58 => '58',
        59 => '59',
      ),
    ),
    7 => array(
      'title' => 'Senza Senape',
      'operator' => 'not',
      'value' => array(
        56 => '56',
        57 => '57',
      ),
    ),
    8 => array(
      'title' => 'Senza Crostacei',
      'operator' => 'not',
      'value' => array(
        52 => '52',
        51 => '51',
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
      'title' => 'Senza Sesamo',
      'operator' => 'not',
      'value' => array(
        44 => '44',
        43 => '43',
      ),
    ),
    11 => array(
      'title' => 'Senza Arachidi',
      'operator' => 'not',
      'value' => array(
        53 => '53',
        54 => '54',
      ),
    ),
    12 => array(
      'title' => 'Senza Glutine',
      'operator' => 'not',
      'value' => array(
        25 => '25',
        24 => '24',
      ),
    ),
    13 => array(
      'title' => 'Senza Lattosio',
      'operator' => 'not',
      'value' => array(
        22 => '22',
        21 => '21',
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
      'title' => 'Senza An .Solforosa e Solfiti',
      'operator' => 'not',
      'value' => array(
        46 => '46',
        50 => '50',
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
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'lang';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Criterio del filtro: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;
  /* Criterio del filtro: Content: Cover orientation float (field_cover_orientation_float) */
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['id'] = 'field_cover_orientation_float_value';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['table'] = 'field_data_field_cover_orientation_float';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['field'] = 'field_cover_orientation_float_value';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['value']['value'] = '600';
  $handler->display->display_options['filters']['field_cover_orientation_float_value']['group'] = 1;
  /* Criterio del filtro: Content: Immagine copertina (field_immagine_copertina:fid) */
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['id'] = 'field_immagine_copertina_fid';
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['table'] = 'field_data_field_immagine_copertina';
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['field'] = 'field_immagine_copertina_fid';
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_immagine_copertina_fid']['group'] = 1;
  $handler->display->display_options['path'] = 'dashboard_prodotti_vr';
  $export['ricerca_prodotti'] = $view;

  return $export;
}
